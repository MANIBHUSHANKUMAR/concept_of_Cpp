/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back {element};
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
}*/


// find the last occurence of an element x in a given array;
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"enter x:";
    int x;
    cin>>x;
    int occurence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
        cout<<occurence<<endl;
    }

    return 0;
}*/


// count the number of elements strictly greater than value x;
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"enter x:";
    int x;
    cin>>x;
    int  count =0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}*/

// CHECK IF THE given array is sorted or not;

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};
    bool sortedflag  = true;
    for(int i=1;i<6;i++){
        if(array[i]<=array[i-1]){
            sortedflag = false;

        }
    }
    cout<<sortedflag<<endl;
    return 0;
}*/
