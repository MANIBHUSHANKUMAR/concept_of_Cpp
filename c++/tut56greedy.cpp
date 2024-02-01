// fractional knapsack
// Question1 given  the weight and profit of N items,in the form of {profit,weight}put these items in a knapsack of capacity W to get the maximum total profit in the knapsack .in fractional knapsack , we can break item for maximizing the total value of the knapsack.
// input arr[] = {{60,10},{100,20},{120,30}},w = 50
//output : 240
// explanation : by taking items of weight 10 and 20 kg and 2/3 fraction of 30kg. hence total price will be 60+100+(2/3)(120) = 240
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct item {
    int value;
    int weight;
};

bool cmp(item i1, item i2) {
    // custom comparator for sorting
    double v_w_i1 = static_cast<double>(i1.value) / i1.weight;
    double v_w_i2 = static_cast<double>(i2.value) / i2.weight;
    return v_w_i1 > v_w_i2;
}

double fractional(int W, vector<item>& items) {
    double ans = 0;
    sort(items.begin(), items.end(), cmp);
    for (const auto& it : items) {
        if (it.weight <= W) {
            ans += it.value;
            W -= it.weight;
        } else {
            double fraction = static_cast<double>(W) / it.weight;
            ans += fraction * it.value;
            W = 0;
        }
        if (W == 0) {
            break;
        }
    }
    return ans;
}

int main() {
    int n, w;
    cin >> n >> w;
    vector<item> items;
    for (int i = 0; i < n; i++) {
        int v, wt;
        cin >> v >> wt;
        item it;
        it.value = v;
        it.weight = wt;
        items.push_back(it);
    }
    cout << fractional(w, items) << "\n";

    return 0;
}
