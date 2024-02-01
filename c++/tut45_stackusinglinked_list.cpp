#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Stack {
private:
    Node* head;
    int capacity;
    int currSize;

public:
    Stack(int c) {
        capacity = c;
        currSize = 0;
        head = NULL;
    }

    bool isEmpty() {
        return currSize == 0;
    }

    bool isFull() {
        return currSize == capacity;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push more elements." << endl;
            return;
        }
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        currSize++;
        cout << "Pushed " << data << " onto the stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        currSize--;
        cout << "Popped an element from the stack." << endl;
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1; // Return a default value or throw an exception if needed.
        }
        return head->data;
    }
};

int main() {
    Stack myStack(5); // Create a stack with a capacity of 5.

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout << "Top element: " << myStack.top() << endl;
    
    myStack.pop();

    cout << "Top element after pop: " << myStack.top() << endl;

    return 0;
}
