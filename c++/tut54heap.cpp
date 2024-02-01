// insertion in minhea
/*#include<iostream>
using namespace std;
int const N = 1e3;
void insertMinHeap(int minHeap[],int &size, int value){
    size++;
    minHeap[size] = value;
    int curr = size;
    while (curr/2 > 0 && minHeap[curr/2]> minHeap[curr]) 
    {
        swap(minHeap[curr/2],minHeap[curr]);
        curr = curr/2;
    }
    
}
int main(){
    int minHeap[N]= {-1,10,20,30,40,50};
    int size = 5;
    int value = 5;
    insertMinHeap(minHeap,size,value);
    for (int i = 0; i < size; i++)
    {
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    return 0;
    
}*/


// insertion in max heap
#include<iostream>
using namespace std;
int const N = 1e3;
void insertMinHeap(int minHeap[],int &size, int value){
    size++;
    minHeap[size] = value;
    int curr = size;
    while (curr/2 > 0 && minHeap[curr/2]> minHeap[curr]) 
    {
        swap(minHeap[curr/2],minHeap[curr]);
        curr = curr/2;
    }
    
}
int main(){

    int maxHeap[N] = {-1,60,50,40,30,20,10,5}
    int size = 7;
    int value =100;
    for (int i = 0; i < size; i++)
    {
        cout<<maxHeap[i]<<" ";
    }cout<<endl;

    return 0;
    
}
