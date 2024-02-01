#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int> &st, int value) {
    if (st.empty()) {
        st.push(value);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtBottom(st, value);
    st.push(topElement);
}

// Function to reverse a stack using insertAtBottom
void reverse(stack<int> &st) {
    if (st.empty()) {
        return;
    }
    int curr = st.top();
    st.pop();
    reverse(st); // Recursively reverse the remaining stack
    insertAtBottom(st, curr);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // Reverse the stack
    reverse(st);

    while (!st.empty()) {
        int curr = st.top();
        st.pop();
        cout << curr << "\n";
    }

    return 0;
}
 