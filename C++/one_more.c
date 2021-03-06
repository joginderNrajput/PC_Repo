#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data){
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node *root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root){
    if(root != NULL){
        preOrder(root->left);
        preOrder(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node *root){
    if(root != NULL){
        preOrder(root->left);
        printf("%d ",root->data);
        preOrder(root->right);
    }
}

int main(){
    struct node *p = createNode(6);
    struct node *p1 = createNode(8);
    struct node *p2 = createNode(3);
    struct node *p3 = createNode(7);
    struct node *p4 = createNode(8);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    preOrder(p);
    printf("\n");
    postOrder(p);
    printf("\n");
    inOrder(p);
    return 0;
}