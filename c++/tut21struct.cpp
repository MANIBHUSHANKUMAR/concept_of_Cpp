// #include <iostream>
// using namespace std;
// class employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setdata(int a1, int b1,int c1);//declaration
//     void getdata(){
//         cout<<"the value of a is "<<a<<endl;
//         cout<<"the value of b is "<<b<<endl;
//         cout<<"the value of c is "<<c<<endl;
//         cout<<"the value of d is "<<d<<endl;
//         cout<<"the value of e is "<<e<<endl;
//     }
// };

//     void employee :: setdata(int a1,int b1,int c1){
//         a = a1;
//         b = b1;
//         c = c1;
//     }


// int main()
// {
//     employee mani;
//     mani.d = 34;
//     mani.e = 89;
//     mani.setdata(1,2,4);
//     mani.getdata();

//     return 0;
// }


#include<iostream>
using namespace std;
class employee{
    public:
    string employee_name;
    int age;
    int salary;
    int increment;
};
int main(){
    {
    employee ep;
    ep.employee_name = "manibhushan";
    ep.age = 12;
    ep.salary = 20000;
    ep.increment = 12;
    cout<<ep.employee_name<<endl;
    cout<<ep.age<<endl;
    cout<<ep.salary<<endl;
    cout<<ep.increment<<endl;
    }
    {
    employee ep1;
    ep1.employee_name = "bhushan";
    ep1.age = 120;
    ep1.salary = 200000;
    ep1.increment = 120;
    cout<<ep1.employee_name<<endl;
    cout<<ep1.age<<endl;
    cout<<ep1.salary<<endl;
    cout<<ep1.increment<<endl;
    }

}