#include<iostream>
#include<string>
using namespace std;
      class binary{
      string s;
      public:
      void read();
      void chk_bin(void);

      };
      void binary :: read(void){
        cout<<"enter a binary number"<<endl;
        cin>>s;

      }
      void binary :: chk_bin(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='0'&& s.at(i)!='1'){
                cout<<"incorrect binary format"<<endl;
                exit(0);
            }
        }
      }
int main(){
    // oops - classes and object
    // c++ ----> intially called ---> c with classes by stroustroup
    // class---> extension of structure(in c)
    //structure had limitation 
    //---->members are public
    //---->no methods
    // class---> structures + more
    //classes ---->can have methods and properties
    // classes---> can make few members as private & few  as public;
    //structure in c++ are typedef
    //you can declare objects along with the class declaration.
    /* class employee{
         class definition
      }harry,rohan,lovish*/
      // harry.salary = 8 makes no sense if salary is private

      // nesting of member function
      binary b;
      b.read();
      b.chk_bin();


    return 0;
}