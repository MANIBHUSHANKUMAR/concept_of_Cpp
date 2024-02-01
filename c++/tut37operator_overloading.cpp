#include<iostream>
using namespace std;

class complex {
public:
    int real;
    int img;

    complex(int x, int y) {
        real = x;
        img = y;
    }

    complex operator+ (complex &c2) {
        complex ans(0, 0);
        ans.real = real + c2.real; // Changed c.real to c2.real
        ans.img = img + c2.img;    // Changed c.img to c2.img
        return ans;
    }
}; // Added a semicolon here

int main() {
    complex c1(1, 2);
    complex c2(1, 3);
    complex c3 = c1 + c2;
    cout << c3.real << " i" << c3.img << endl;
    return 0;
}
