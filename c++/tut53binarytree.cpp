#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* left;
    node* right;
    node(int v){
        value = v;
        left = right = NULL;
    }
};
int main(){
    node* root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    cout<<"root node: "<<root->value<<endl;
    cout<<"left child: "<<root->left->value<<endl;
    cout<<"right child: "<<root->right->value<<endl;
    return 0;
}


// write a program in tree

/* #include <iostream>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) {
        value = v;
        left = right = nullptr;
    }
};

int main() {
    node* root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    root->left->left = new node(5);
    root->left->right = new node(6);
    root->right->left = new node(7);
    root->right->right = new node(8);

    cout << "root->value: " << root->value << endl;
    cout << "root->left->value: " << root->left->value << endl;
    cout << "root->right->value: " << root->right->value << endl;
    cout << "root->left->left->value: " << root->left->left->value << endl;
    cout << "root->left->right->value: " << root->left->right->value << endl;
    cout << "root->right->left->value: " << root->right->left->value << endl;
    cout << "root->right->right->value: " << root->right->right->value << endl;

    return 0;
}*/

// prorder traversal
/*#include <iostream>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) {
        value = v;
        left = right = nullptr;
    }
};
void preorderTraversal(node* rootnode){
    //base case
    if(rootnode==nullptr){
        return;
    }
    cout<<rootnode->value<<" ";
    //recusive call
    preorderTraversal(rootnode->left);
    preorderTraversal(rootnode->right);
}

int main() {
    node* rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    preorderTraversal(rootnode);
    return 0;
}*/



// inorder
/*#include <iostream>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) {
        value = v;
        left = right = nullptr;
    }
};
void inorderTraversal(node* rootnode){
    //base case
    if(rootnode==nullptr){
        return;
    }
    // recursive call 
    inorderTraversal(rootnode->left);
    cout<<rootnode->value<<" ";
    inorderTraversal(rootnode->right);
}

int main() {
    node* rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    inorderTraversal(rootnode);
    return 0;
}*/


//postorder

/*#include <iostream>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) {
        value = v;
        left = right = nullptr;
    }
};
void postorderTraversal(node* rootnode){
    //base case
    if(rootnode==nullptr){
        return;
    }
    // recursive call 
    postorderTraversal(rootnode->left);
    postorderTraversal(rootnode->right);
    cout<<rootnode->value<<" ";
    
}

int main() {
    node* rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    postorderTraversal(rootnode);
    return 0;
}*/




// levelorder(bfs)
/*#include <iostream>
#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) {
        value = v;
        left = right = nullptr;
    }
};

void levelorderTraversal(node* rootnode) {
    if (rootnode == nullptr) {
        return;
    }
    queue<node*> q;
    q.push(rootnode);

    while (!q.empty()) {
        int nodesatCurrentLevel = q.size();
        while (nodesatCurrentLevel--) {
            node* currnode = q.front();
            q.pop();
            if (currnode->left) {
                q.push(currnode->left); // <-- Corrected the condition (left node instead of right)
            }
            if (currnode->right) {
                q.push(currnode->right); // Push right node if it exists
            }
            cout << currnode->value << " ";
        }
    }
    cout << endl;
}

int main() {
    node* rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    levelorderTraversal(rootnode);
    return 0;
}*/



// ques given the root of a binary tree , return the number of leaf nodes present in it.a leaf node is a node which has no left and right child.
//           2
//     4            10
//   6    5             11

/*#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) {
        value = v;
        left = right = nullptr;
    }
};

int leafnodes(node* rootnode) {
    // base case 
    if (rootnode== NULL){
        return 0;
    }
    if (rootnode->left== NULL && rootnode->right== NULL)
    {
        return 1;//leaf node
    }
    
    //recursive case
    int leftsubtreeleafnodes = leafnodes(rootnode->left);
    int rightsubtreeleafnodes = leafnodes(rootnode->right);
    return leftsubtreeleafnodes + rightsubtreeleafnodes;
}

int main() {
    node* rootnode = new node(2);
    rootnode->left = new node(4);
    rootnode->right = new node(10);
    rootnode->left->left = new node(6);
    rootnode->left->right = new node(5);
    rootnode->right->right = new node(11);
    cout<<leafnodes(rootnode)<<endl;
    return 0;
}*/


// insertion 
/*#include <iostream>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) : value(v), left(nullptr), right(nullptr) {}
};

void insertBST(node*& root, int val) {
    if (root == nullptr) {
        root = new node(val);
        return;
    }

    node* current = root;
    while (true) {
        if (current->value > val) {
            if (current->left == nullptr) {
                current->left = new node(val);
                return;
            }
            current = current->left;
        } else {
            if (current->right == nullptr) {
                current->right = new node(val);
                return;
            }
            current = current->right;
        }
    }
}

void inorderTraversal(node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

class BST {
public:
    node* root;
    BST() : root(nullptr) {}
};

int main() {
    BST bst1;
    insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);
    insertBST(bst1.root, 5);


    inorderTraversal(bst1.root);
    return 0;
}*/



/*#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;

    node(int v) : value(v), left(nullptr), right(nullptr) {}
};

class BST {
public:
    node* root;
    
    BST() : root(nullptr) {}
};

void insertBST(node*& root, int val) {
    if (root == nullptr) {
        root = new node(val);
        return;
    }

    node* current = root;
    while (true) {
        if (current->value > val) {
            if (current->left == nullptr) {
                current->left = new node(val);
                return;
            }
            current = current->left;
        } else {
            if (current->right == nullptr) {
                current->right = new node(val);
                return;
            }
            current = current->right;
        }
    }
}

node* sortedArrayToBST(vector<int>& v, int start, int end){
    // base case
    if (start > end) {
        return nullptr;
    }
    int mid = (start + end) / 2;
    node* root = new node(v[mid]);
    // recursive case
    root->left = sortedArrayToBST(v, start, mid - 1);
    root->right = sortedArrayToBST(v, mid + 1, end);
    return root;
}

void inorderTraversal(node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6}; // Sorted array
    BST bst1;
    bst1.root = sortedArrayToBST(arr, 0, arr.size() - 1);

    inorderTraversal(bst1.root);
    return 0;
}*/



// generic trees 
/*#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    char data;
    vector<node*> children;
    node(char data){
        this->data = data;

    }
};
int main(){
    node* root = new node('A');
    root->children.push_back(new node('B'));
    root->children.push_back(new node('C'));

    cout<<root->data<<endl;
    for(node* child:root->children){
        cout<<child->data<<" ";
    }cout<<endl;
    return 0;
}*/


// given a generic tree and an integer x. find and retur the node with the next larger eleement in the tree .i.e find a node just greater than x. return NULL if no node is present with value greater than x;
//      20
//    8    22
//  4   12
//    10   14



