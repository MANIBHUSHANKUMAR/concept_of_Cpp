// write a program to insert and element
// write a program to delete alternate element
// write a program to print repeted element print only one times,'

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

class linkedList
{
public:
    node *head;

    linkedList()
    {
        head = NULL;
    }

    void insertAtTail(int value)
    {
        node *new_node = new node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
void deleteDuplicateNode(node *&head)
{
    node *cur_node = head;
    while (cur_node == NULL)
    {
        while (cur_node->next && cur_node->val == cur_node->next->val)
        {
            node *temp = cur_node->next;
            cur_node->next = cur_node->next;
            free(temp);
        }
        // this loops  end when current node and next node values are different
        // or linkedkist ends;
        cur_node = cur_node->next;
    }
}
void daleteAlternateNode(node *&head)
{
    node *curr_node = head;
    while (curr_node != NULL && curr_node->next != NULL)
    {
        node *temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}

int main()
{
    linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    daleteAlternateNode(ll.head);
    ll.display();
    deleteDuplicateNode(ll.head);
    ll.display();

    return 0;
}
