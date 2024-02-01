#include<iostream>
using namespace std;
// int c = 45;
int main(){
    // int a,b,c;
    // cout<<"enter the value of a:";
    // cin>>a;
    // cout<<"enter the value of b:";
    // cin>>b;
    // c = a+b;
    // cout<<"the sum is:"<<c;
    // cout<<"\nthe global c is "<<::c;


//***************float,double and long double literals****************
// float d=34.4;
// long double e =34.4;
// cout<<"the value of d is: "<<d<<"\nthe value of e is: "<<e<<endl;
// cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"the size of 34.4F is "<<sizeof(34.4L)<<endl;


//***************reference variable****************
// float x = 455;
// float & y = x;
// cout<<x<<endl;
// cout<<x<<endl;


//***************typecasting****************
int a =45;
float b = 45.46;
cout<<"the value of a is: "<<(float)a<<endl;
cout<<"the value of b is: "<<float(a)<<endl;

cout<<"the value of b is "<<(int)b<<endl;
cout<<"the value of b is "<<int(b)<<endl;

cout<<"the expression is:"<<a+b<<endl;
cout<<"the expression is:"<<a+int(b)<<endl;
cout<<"the expression is:"<<a+(int)b<<endl;
return 0;
}