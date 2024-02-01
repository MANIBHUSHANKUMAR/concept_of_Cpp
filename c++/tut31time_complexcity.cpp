#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int m = 9;
    int arr2[]={10,11,12,13,14,15,16,17,18};
    int sum3=0;
    int sum1 = 0;
    int sum2 = 0;
    int new_list[9]; 
    cout<<"new Array :";
    for (int i = 0; i <9; i++)
    {
        sum3+=arr1[i]+arr2[i];
         sum1 += arr1[i];
        sum2 += arr2[i];
        new_list[i]=arr1[i]+arr2[i];
         cout<<new_list[i]<<" ";
    }
    cout<<"\nthe sum of array_1 is "<<sum1<<"\n\nthe sum of array_2 is "<<sum2<<"\n\nthe sum of array_3 is "<<sum3;
   
    return 0;
}