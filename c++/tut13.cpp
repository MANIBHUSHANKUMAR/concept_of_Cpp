#include<iostream>
using namespace std;
int main(){
    int marks[]={23,45,56,89};
    int mathmarks[4];
    mathmarks[0]=3432;
    mathmarks[1]=34349;
    mathmarks[2]=98229;
    mathmarks[3]=38983;
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    for(int i=0;i<4;i++){
        cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
    }
}