#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_pack(10);
    dq.push_pack(20);
    dq.push_pack(30);
    dq.push_pack(0);
    dq.push_pack(33);
    while (not dq.empty())
    {
        cout<<dq.pop_front()<<" ";
        dq.pop_front();
    }
    


    return 0;
}