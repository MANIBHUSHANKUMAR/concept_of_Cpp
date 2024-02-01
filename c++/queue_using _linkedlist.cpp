#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
    node* head;
    node* tail;
    int size;

public:
    Queue() {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void enqueue(int data) {
        node* newNode = new node(data);
        if (this->head == NULL) {
            this->head = this->tail = newNode;
        } else {
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }

    void dequeue() {
        if (this->head == NULL) {
            return;
        } else {
            node* oldhead = this->head;
            node* newhead = this->head->next;
            this->head = newhead;
            if (this->head == NULL) this->tail = NULL;
            oldhead->next = NULL;
            delete oldhead;
            this->size--;
        }
    }

    int getSize() {
        return this->size;
    }

    bool isEmpty() {
        return this->head == NULL;
    }
};

int main() {
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);

    cout << "Queue size: " << qu.getSize() << endl;
    
    while (!qu.isEmpty()) {
        cout << "Dequeue: " << qu.getSize() << " -> " << qu.isEmpty() << endl;
        qu.dequeue();
    }
    
    cout << "Queue size: " << qu.getSize() << endl;

    return 0;
}
