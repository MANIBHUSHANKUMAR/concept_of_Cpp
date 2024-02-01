#include<iostream>
using namespace std;
int main(){

    // selection control structure: if-else ladder.
    
    int age;
    cout<<"this is if-else condition tutorial.";
    cout<<"\ntell me your age: ";
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"\nyou cannot come to my party";
    }
    else if(age==18){
     cout<<"\nyou are a kid and you will get a kid pass to the party";
    }
    else if(age<1){
        cout<<"\n you are not yet to born.";
    }
    else{
        cout<<"\nyou can come to the party";
    }
    return 0;
}