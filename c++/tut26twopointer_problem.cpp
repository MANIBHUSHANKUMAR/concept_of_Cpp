// sort an array consisting of only 0s and 1s.
/*#include<iostream>
#include<vector>
using namespace std;
void sortZeroandOnes(vector<int> &v){
    int zeroes_count =0;
    for(int ele:v){
        if(ele==0){
            zeroes_count++;
        }
    }
    for(int i=0;i<v.size;i++){
        if(i<zeroes_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
int main(){
    int n;
    cin>>n;
}
vectoe<int.v;
for(int i=0;i<n;i++){
    int ele; 
    cin>>ele;
    v.push_back(ele);
}
sortZeroandOnes(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
    cout<<endl;
}*/


//given an array of integers 'a, move all the even integer at the beginning of the array followed by all the odd integers. the relative order of odd or even integer does not matter.return any array that satisfies the condition.
/*#include<iostream>
#include<vector>
using namespace std;
void sortByParity(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==1  && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++; right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i =0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
        sortByParity(v);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }

    return 0;
}*/
