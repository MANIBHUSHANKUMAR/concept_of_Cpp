#include <iostream>

struct node {
    int info;
    node* next;
};

node* start = nullptr;
node* rear = nullptr;

node* create_new_node(int n) {
    node* ptr = new node;
    ptr->info = n;
    ptr->next = nullptr;
    return ptr;
}

void insert(node* np) {
    if (start == nullptr)
        start = rear = np;
    else {
        rear->next = np;
        rear = np;
    }
}

void traverse(node* np) {
    while (np != nullptr) {
        std::cout << np->info << "->";
        np = np->next;
    }
    std::cout << "!!!\n";
}

int main() {
    int inf;
    char ch = 'y';
    
    while (ch == 'y' || ch == 'Y') {
        std::cout << "\n Enter information for the new node...";
        std::cin >> inf;
        node* newptr = create_new_node(inf);
        
        if (newptr == nullptr) {
            std::cout << "\n Press Y to enter more nodes, N to exit...\n";
            std::cin >> ch;
        }
        else {
            insert(newptr);
            std::cout << "\n The list now is: \n";
            traverse(start);
        }
    }
    
    // Move return 0; here, outside the while loop
    return 0;
}
