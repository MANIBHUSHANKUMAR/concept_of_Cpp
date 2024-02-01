#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a =34;
    // cout<<"the value of a was: "<<a;
    // a = 45;
    // cout<<"\nthe value of a is: "<<a;

    // constant in c++;
    // const float a =3.4;
    // cout<<"the value of a was: "<<a;
    // a = 45;  // you will get an error because a is a constant.
    // cout<<"\nthe value of a is: "<<a;

    //********************* manipulators in c++ **************************
    // int a = 3,b=78,c=1233;
    // cout<<"the value of a without setw is: "<<a<<endl;
    // cout<<"the value of b without setw is: "<<b<<endl;
    // cout<<"the value of c without setw is: "<<c<<endl;

    // cout<<"the value of a is: "<<setw(4)<<a<<endl;
    // cout<<"the value of b is: "<<setw(4)<<b<<endl;
    // cout<<"the value of c is: "<<setw(4)<<c<<endl;


    //********************* operator precedence in c++ **************************
    int a =3,b = 4;
    int c = a*b+43-34+56;
    cout<<c;
return 0;
}