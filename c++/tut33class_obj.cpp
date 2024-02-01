#include<bits/stdc++.h>
using namespace std;

class rectangle {
public:
    int l;
    int b;

    rectangle() { // default constructor - no arguments passed
        l = 0;
        b = 0;
    }

    rectangle(int x, int y) { // parameterized constructor - arguments passed
        l = x;
        b = y;
    }
};

int main() {
    rectangle r1;
    cout << r1.l << " " << r1.b << endl;

    rectangle r2(3, 4);
    cout << r2.l << " " << r2.b << endl;
    return 0;
}
