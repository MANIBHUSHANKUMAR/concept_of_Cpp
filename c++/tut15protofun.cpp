#include<iostream>
using namespace std;

int sum(int a,int b){
    //formal parameters a and b will be taking values from actual parameters num1 and num2..
int c = a+b;
return c;
}

int main(){
int num1,num2;
cout<<"enter first number"<<endl;
cin>>num1;
cout<<"enter second number"<<endl;
cin>>num2;
// num1 and num2 are actual parameters;
cout<<"the sum is "<<sum(num1,num2);
void g();
    return 0;
}
void g(){
    cout<<"\n hello,good morning";
}