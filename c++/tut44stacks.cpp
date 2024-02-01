#include <iostream>
#include <climits>  // Add this for INT_MIN
using namespace std;

class stack {
    int capacity;
    int* arr;
    int top;

public:
    stack(int c) {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data) {
        if (this->top == this->capacity - 1) { // Use == for comparison
            cout << "overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop() {
        if (this->top == -1) {
            cout << "underflow\n";
            return INT_MIN; // Return INT_MIN when underflow occurs
        }
        int poppedValue = this->arr[this->top];
        this->top--;
        return poppedValue; // Return the popped value
    }

    int getTop() {
        if (this->top == -1) {
            cout << "underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty() { // Corrected function name
        return this->top == -1;
    }

    int size() {
        return this->top + 1;
    }

    bool isFull() { // Corrected function name
        return this->top == this->capacity - 1;
    }
};

int main() {
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << "\n";
    st.push(4);
    st.push(5);
    cout << st.getTop() << "\n";
    st.push(8); // This will trigger an overflow message
    st.pop();
    st.pop();
    cout<<st.getpop()<<"\n";
    return 0;
}
