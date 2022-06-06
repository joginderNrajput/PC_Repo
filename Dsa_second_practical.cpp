#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void PreOrder(Node* temp){
   
    if(temp != NULL){
        cout << " " << temp -> data;
        PreOrder(temp -> left);
        PreOrder(temp -> right);
    }
}

void InOrder(Node* temp ){
    
    if(temp != NULL){
        InOrder(temp -> left);
        cout << " " << temp -> data ;
        InOrder(temp -> right);
    }
}

void PostOrder(Node* temp ){
   
    if(temp != NULL){
        PostOrder(temp -> left);
        PostOrder(temp -> right);
        cout << " " << temp -> data ;
    }
}

int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
 
    PreOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    PostOrder(root);
    cout << endl;
    return 0;
}