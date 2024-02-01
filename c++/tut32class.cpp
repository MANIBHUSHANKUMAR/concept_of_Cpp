/*#include<bits/stdc++.h>
using namespace std;
class fruit{
    public:
    string name;
    string color;
    int size;
};
int main(){
    fruit apple;
    apple.name = "Apple";
    apple.color = "Red";
    apple.size = 4;
    cout<<apple.name<<" "<<apple.color<<" "<<apple.size<<endl;

    fruit *mango = new fruit();
    mango->name = "Mango";
    mango->color = "red";

    cout<<mango->name<<" "<<mango->color<<endl;

    fruit *papaya=new fruit();
    papaya->name = "papaya";
    papaya->color = "yellow";
    cout<<papaya->name<<" "<<papaya->color<<endl;

     fruit grapes;
    grapes.name = "grapes";
    grapes.color = "green";
    cout<<grapes.name<<" "<<grapes.color<<endl;
}*/


#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string color;
    string cost;
    int size;
    string secure_percentage;

};
int main(){
    car desire;
    desire.name = "desire";
    desire.color = "red";
    desire.cost = "two lakh";
    desire.size = 4;
    desire.secure_percentage = "70% secure";
    cout<<"desire feedback"<<"\n\n";
    cout<<desire.name<<" \n"<<desire.color<<" \n"<<desire.cost<<" \n"<<desire.size<<" \n"<<desire.secure_percentage<<"\n\n"<<endl;

    car bolero;
    bolero.name = "Bolero";
    bolero.color = "white";
    bolero.cost = "5 lakh";
    bolero.size = 6;
    bolero.secure_percentage = "90%";
    cout<<"bolero feedback"<<"\n\n";
    cout<<bolero.name<<" \n"<<bolero.color<<" \n"<<bolero.cost<<" \n"<<bolero.size<<" \n"<<bolero.secure_percentage<<endl;



}