#include<iostream>
using namespace std;

int main(){
    int a=4,b=5;
    cout<<"operators in c++"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    // arithmatic operators
    cout<<"the value of a+b:"<<a+b;
    cout<<"\nthe value of a-b:"<<a-b;
    cout<<"\nthe value of a*b:"<<a*b;
    cout<<"\nthe value of a/b:"<<a/b;
    cout<<"\nthe value of a%b:"<<a%b;
    cout<<"\nthe value of a++:"<<a++;
    cout<<"\nthe value of a--:"<<a--;
    cout<<"\nthe value of ++a:"<<++a;
    cout<<"\nthe value of --a:"<<--a;

    // assignment operator - use to assign value of variables
    // a = 3,b=6;
    // char d = 'd';

    // comparison operator
    cout<<"\nthis is comparison operator";
    cout<<"\nthe value of a == b is: "<<(a==b);
    cout<<"\nthe value of a != b is: "<<(a!=b);
    cout<<"\nthe value of a > b is: "<<(a>b);
    cout<<"\nthe value of a < b is: "<<(a<b);
    cout<<"\nthe value of a <= b is: "<<(a<=b);
    cout<<"\nthe value of a >= b is: "<<(a>=b);

     // logical operator
     cout<<"\nthis is logical operator";
     cout<<"\n the value 0f logical and operator ((a==b)&&(a>b)) is : "<<((a==b)&&(a>b));
     cout<<"\n the value 0f logical or operator ((a==b)||(a>b)) is : "<<((a==b)||(a>b));
     cout<<"\n the value 0f logical nor operator (!(a==b)) is : "<<(!(a==b));
return 0;
}