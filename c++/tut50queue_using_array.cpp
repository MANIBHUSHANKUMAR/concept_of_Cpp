/*#include <iostream>
#include <vector>
using namespace std;

class Queue {
    int front;
    int back;
    vector<int> v;

public:
    Queue() {  // The constructor should have the same name as the class.
        this->back = -1;
        this->front = -1;
    }

    void enqueue(int data) {
        v.push_back(data);
        if (isEmpty()) {
            this->front = 0;
        }
        this->back++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        
        this->front++;
        if (this->front > this->back) {
            this->front = -1;
            this->back = -1;
        }
    }

    int getfront() {
        if (this->front == -1) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return this->v[this->front];
    }

    bool isEmpty() {
        return this->front == -1;
    }
};

int main() {
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);
    
    while (!qu.isEmpty()) {
        cout << qu.getfront() << " ";
        qu.dequeue();
    }

    return 0;
}*/ 


// using stl

#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60);
    qu.push(70);
    while(not qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;

}
