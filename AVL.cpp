#include <iostream>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

struct Node *createNode(int key)
{
    struct Node *node = new struct Node;
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

int getBalanceFactor(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = 1 + max(getHeight(y->right), getHeight(y->left));
    x->height = 1 + max(getHeight(x->right), getHeight(x->left));

    return x;
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *t2 = y->left;

    y->left = x;
    x->right = t2;

    y->height = max(getHeight(y->right), getHeight(y->left));
    x->height = max(getHeight(x->right), getHeight(x->left));

    return y;
}

struct Node *insert(struct Node *node, int key)
{
    if (node == NULL)
    {
        return (createNode(key));
    }

    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else
    {
        node->right = insert(node->right, key);
    }
    return node;
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);

    if (bf > 1 && key < node->left->key)
    {
       return  rightRotate(node);
    }

    if (bf < -1 && key > node->right->key)
    {
        return leftRotate(node);
    }
    if (bf > 1 && key > node->left->key)
    {
        node->left - leftRotate(node->left);
       return  rightRotate(node);
    }
    if (bf < -1 && key < node->right->key)
    {
        node->right - rightRotate(node->right);
       return  leftRotate(node);
    }
    return node;
}

void preOrder(struct Node * root){
    if(root != NULL){
        preOrder(root -> left);
        cout << root -> key << " ";
        preOrder(root -> right);
        
    }
}
int main()
{
    struct Node * root  = NULL;
     root = insert(root, 1);
     root = insert(root, 2);
     root = insert(root, 3);
     root = insert(root, 4);
     root = insert(root, 5);
     root = insert(root, 6);

     preOrder(root);
    return 0;
}