#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *createNode(int data)
{
    node *n;
    n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void posOrder(node *root)
{
    if (root != NULL)
    {
        posOrder(root->left);
        posOrder(root->right);
        cout << root->data << " ";
    }
}

int isBST(node *root)
{
    static node *prev = NULL;
    if (root != NULL)
    {
        if (! isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }else{
        return 1;
    }
}
int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

     p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    cout << endl;
    if(isBST(p)){
        cout << "The tree is Binary Search Tree " << endl;
    }else{
        cout << " The tree is not a binary Search Tree " << endl;
    }
    return 0;
}