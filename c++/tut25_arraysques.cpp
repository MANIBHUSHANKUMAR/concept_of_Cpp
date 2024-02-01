// find the total number of pairs in the array whose sum is equal to the given value of x.
/*#include<iostream>
using namespace std;
int main(){
    int array[]={3,4,6,7,1};
    int targetsum = 7;
    int size = 5;
    int pairs = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<"the teget sum of element "<<pairs<<endl;
    return 0;
}*/

// count the number of triplets whose sum is equal to the given value of x;
/*#include<iostream>
using namespace std;
int main(){
    int array[]={3,1,2,4,0,6};
    int targetsum = 5;
    int size = 6;
    int triplets=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;
    return 0;
}*/


// find the unique number in a given array where all the element s are being repeated twice with one value being unique.
/*#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,1,3,2,4,4,5,1};
    int size = 9;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
   
    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout<<"the number is "<<array[i]<<endl;

        }
    }

}*/


// 

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);

    v.push_back(3);

    v.push_back(4);

    v.push_back(5);

    int k=2;
    k = k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
        
    }
    cout<<endl;
}*/


// given a quaries check if the given number is present in the array or not;
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     n=1e5 + 10;
    vector<int> freq(n,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    cout<<"enter quaries : ";
    int q;
    cin>>q;
    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }
    return 0;
}*/  
