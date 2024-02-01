#include <iostream>

// Define the ListNode struct
struct Listnode
{
    int data;
    Listnode* next;
    Listnode(int val) : data(val), next(nullptr) {}
};

// Function to check if three linked lists are equal
bool areLinkedListEqual(Listnode* head1, Listnode* head2, Listnode* head3)
{
    while (head1 != nullptr && head2 != nullptr && head3 != nullptr)
    {
        if (head1->data != head2->data || head1->data != head3->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
        head3 = head3->next;
    }
    if (head1 != nullptr || head2 != nullptr || head3 != nullptr)
    {
        return false;
    }
    return true;
}

// Define a class for a singly-linked list
class LinkedList
{
public:
    Listnode* head;

    LinkedList() : head(nullptr) {}

    // Function to insert a node at the tail (you need to implement this)
    void insertAtTail(int val)
    {
        // Insert a node with the given value at the tail of the linked list
        // You need to implement this method
    }
};

// Function to find the intersection point of two linked lists
Listnode* getIntersection(Listnode* head1, Listnode* head2)
{
    // Find and return the intersection point of the two linked lists
    // You need to implement this method
    return nullptr; // Placeholder
}
void removeKthNodeFromEnd(Node* &head,int k){
    
}

int main()
{
    // Create three linked lists
    Listnode* list1 = new Listnode(1);
    list1->next = new Listnode(2);
    list1->next->next = new Listnode(3);

    Listnode* list2 = new Listnode(1);
    list2->next = new Listnode(2);
    list2->next->next = new Listnode(3);

    Listnode* list3 = new Listnode(1);
    list3->next = new Listnode(2);
    list3->next->next = new Listnode(3);

    // Check if the three linked lists are equal
    bool result = areLinkedListEqual(list1, list2, list3);
    std::cout << (result ? "Lists are equal." : "Lists are not equal.") << std::endl;

    // Clean up memory
    delete list1;
    delete list2;
    delete list3;

    // Create instances of the LinkedList class (you need to implement this)
    LinkedList ll1;
    LinkedList ll2;

    // Insert elements into the linked lists (you need to implement this)
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);

    ll2.insertAtTail(6);
    ll2.insertAtTail(7);

    // Find the intersection point of ll1 and ll2 (you need to implement this)
    Listnode* intersection = getIntersection(ll1.head, ll2.head);

    if (intersection != nullptr)
    {
        std::cout << "Intersection point: " << intersection->data << std::endl;
    }
    else
    {
        std::cout << "No intersection found." << std::endl;
    }

    return 0;
}
