// selection control structure : switch case statements.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"\ntell me your age";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"\nyou are 18";
        break;

        case 22:
        cout<<"\nyou are 22";
        break;

        case 2:
        cout<<"\nyou are 2 years old";
        break;

    
    default:
    cout<<"\nno special cases";
        break;
    }
    return 0;
}