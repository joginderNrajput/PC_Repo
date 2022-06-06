#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};
// traversing the linked list
void print(Node *head, Node *tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    // if (head != NULL && tail != NULL)
    // {
    //     cout << "Head : " << head->data << endl;
    //     cout << "Tail : " << tail->data << endl;
    // }
}

// get the lenght of the linked list
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = tail;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    cout << "insertAtPosition Called" << endl;
    if (position == 1)
    {
        insertAtHead(head, tail, d);
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
        insertAtTail(head, tail, d);
        return;
    }

    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(Node *&head, Node *&tail, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        // curr -> next -> prev = prev;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    print(head, tail);
    insertAtHead(head, tail, 20);
    print(head, tail);
    insertAtHead(head, tail, 30);
    print(head, tail);
    insertAtHead(head, tail, 40);
    print(head, tail);
    insertAtHead(head, tail, 50);
    print(head, tail);
    insertAtTail(tail, tail, 33);
    print(head, tail);
    insertAtPosition(head, tail, 4, 99);
    print(head, tail);
    insertAtPosition(head, tail, 1, 101);
    print(head, tail);
    deleteNode(head, tail, 1);
    print(head, tail);
    // cout << "Head : " << head -> data << endl;
    // cout << "Tail : " << tail -> data << endl;
    cout << "The lenght of the linked list is : " << getLength(head) << endl;
    return 0;
}de