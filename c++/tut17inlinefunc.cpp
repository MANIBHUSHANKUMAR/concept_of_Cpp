#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
int moneyrecevied(int currentmoney,float factor=1.04){
    return currentmoney*factor;
}
int main(){
    int a,b;
    // cout<<"enter the value of a and b: "<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b);
    int money = 10000;
    cout<<"if you have "<<money<<"RS in your bank account,you will receive  "<<moneyrecevied(money)<<"RS after in 1 year";
    return 0;
}