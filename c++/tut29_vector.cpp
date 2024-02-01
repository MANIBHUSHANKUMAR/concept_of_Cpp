#include<iostream>
#include<vector>
using namespace std;

int maximumOnesRow(vector<vector<int>> &v){
    int maxOnes = 0;  // Initialize maxOnes to 0
    int maxOnesRow = -1;
    int columns = v[0].size();
    for(int i = 0; i < v.size(); i++){
        int onesInRow = 0;
        for(int j = 0; j < v[i].size(); j++){
            if(v[i][j] == 1){
                onesInRow++;
            }
        }
        if(onesInRow > maxOnes){
            maxOnes = onesInRow;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> vec[i][j];
        }
    }
    int res = maximumOnesRow(vec);
    cout << res << endl;
}
