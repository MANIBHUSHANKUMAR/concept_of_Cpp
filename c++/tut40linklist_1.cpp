// element insert at first position;
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;

node(int data){
    val = data;
    next = NULL;
}
};
void insertAthead(node* &head,int val ){
 node* new_node = new node(val);
    new_node ->next=head;
    head = new_node; 
}
void display(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
    
}
int main(){
    node* head = NULL;
    insertAthead(head,2);
    display(head);
    insertAthead(head,1);
    display(head);
    return 0;
}