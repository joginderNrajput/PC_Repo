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
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    cout << "Inserted at head  " << ":" << endl;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
    cout << "Inserted at tail  " << " : " << endl;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, data);
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
        insertAtTail(tail, data);
        return;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
    cout << "Inserted at position : " << position <<  endl;
}

void deletion(Node *head, Node *tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;
        int count = 2;
        while (count <= position)
        {
            prev = current;
            current = current->next;
            count++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
        cout << "After Deletion  ";
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *newnode = new Node(99);
    Node *head = newnode;
    Node *tail = newnode;
    insertAtTail(tail, 10);
    print(head);
    insertAtHead(head, 33);
    print(head);
    insertAtPosition(head, tail, 55, 2);
    print(head);
    insertAtPosition(head, tail, 505, 3);
    print(head);
    insertAtPosition(head, tail, 225, 1); 
    print(head);
    insertAtPosition(head, tail, 988, 4);
    print(head);
    insertAtPosition(head, tail, 476, 5);
    print(head);
    insertAtTail(tail, 909);
    print(head);
    deletion(head, tail, 4);
    print(head);
    return 0;
}