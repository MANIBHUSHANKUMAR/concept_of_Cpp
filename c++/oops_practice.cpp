// class
/*#include <iostream>
using namespace std;
class car
{
public:
    string carname;
    int wheel;
    int size_of_car;
};
int main()
{
   { car myobj;
    myobj.carname = "bolero";
    myobj.wheel = 4;
    myobj.size_of_car = 34;
    cout << myobj.carname << " " << myobj.wheel << " " << myobj.size_of_car <<endl;
   }

   {
    car myobj1;
    myobj1.carname = "bolero";
    myobj1.wheel = 4;
    myobj1.size_of_car = 34;
    cout << myobj1.carname << " " << myobj1.wheel << " " << myobj1.size_of_car <<endl;
   }
    return 0;
}*/

// constructor
/*#include<iostream>
using namespace std;
class fruit{
    public:
    string fruitname;
    int fruitsize;
    int fruitquantity;
    //constructor
    fruit(string name,int size,int quantity){
        fruitname = name;
        fruitsize = size;
        fruitquantity = quantity;

    }
};
int main(){
    fruit myfruit("apple",45,5);
    fruit myfruit1("banana",47,7);
    cout<<myfruit.fruitname<<" "<<myfruit.fruitsize<<" "<<myfruit.fruitquantity<<endl;
    cout<<myfruit1.fruitname<<" "<<myfruit1.fruitsize<<" "<<myfruit1.fruitquantity;

}*/

// inside class
/*#include<iostream>
using namespace std;
class myclass{
    public:
    void myMethod(){
        cout<<"hello world";
    }
};
int main(){
    myclass myobj;
    myobj.myMethod();
    return 0;
}*/

// outside
/*#include<iostream>
using namespace std;
class myclass{
    public:
    void myMethod();

};
void myclass::myMethod(){
    cout<<"hello world";
}
int main(){
    myclass myobj;
    myobj.myMethod();
    return 0;
}*/

// Encapsulation
/*#include <iostream>
using namespace std;
class employee
{
private:
    int salary;

public:
    // setter
    void setSalary(int s)
    {
        salary = s;
    }
    // getter
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    {
    employee myobj; // Use lowercase 'e' for the class name
    myobj.setSalary(50000);
    cout << myobj.getSalary()<<endl;
    }
    {
        employee myobj1;
        myobj1.setSalary(40000);
        cout<<myobj1.getSalary()<<endl;
    }
    return 0;
}*/

// inheritence
// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//     void myfunction(){
//         cout<<"func1"<<endl;
//     }
// };
// class mychild : public myclass{
//     cout<<"func2"<<endl;
// };
// class grandchild : public mychild{
// };
// int main(){
//     mygrandchild myobj;
//     myobj.myfunction();
//     myobj.mychild();
//     myobj.mygrandchild();
//     return 0;
// }


#include<iostream>
using namespace std;
class enter{
    int a;
    public:
    enter()
    {
    cout<<"Constructor called"<<endl;//    a=0;
    }
    void display(){
        cout<<endl<<a<<endl;
    }
};
int main(){
    enter obj1,obj2;
    obj1.display();
    obj2.display();
    return 0;
}
