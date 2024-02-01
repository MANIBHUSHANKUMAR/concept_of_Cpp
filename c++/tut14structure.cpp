#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
}ep;
union money{
    int rice;
    char car;
    float pounds;

};

int main(){
struct employee rohandas;
struct employee mani;
union money m1;
m1.rice=34;
cout<<m1.rice;


// ep shubham;
//  mani.id=1;
// mani.favchar='c';
// mani.salary=38738;
// cout<<"the value is "<<mani.id<<endl;
// cout<<"the value is "<<mani.favchar<<endl;
// cout<<"the value is "<<mani.salary<<endl;

    return 0;
}