#include<iostream>
using namespace std;
int main(){
    //what is a pointer.....>data type which holds the address of other data types.
    int a=3;
    int* b = &a;
    // & ...> address of operator
    cout<<"address of a: "<<b<<endl;
    cout<<"address of a: "<<&a<<endl;
    // *.....>dereference operator
    cout<<"the value at address b is: "<<*b<<endl;
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;


    return 0;
}