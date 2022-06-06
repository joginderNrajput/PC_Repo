#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int n)
{
    Node *temp = new Node(n);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int n)
{
    if (position == 1)
    {
        insertAtHead(head, n);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, n);
        return;
    }
    Node *newNode = new Node(n);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;
        int cnt = 2;
        while (cnt <= position)
        {
            prev = current;
            current = current->next;
            cnt++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}
int main()
{
    Node *node1 = new Node(10);
    // Node* node2 = new Node(10);
    // cout<<node1->data << endl;
    // cout<<node1->next <<endl;
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // insertAtHead(head, 112);
    // insertAtHead(head ,88);
    // print(head);
    cout << endl;
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtPosition(tail, head, 3, 111);
    print(head);
    deleteNode(3, head);
    print(head);
    return 0;
}