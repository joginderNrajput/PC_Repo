#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void Insert()
{

    int val;

    if (rear == n - 1)

        cout << "Queue Overflow" << endl;

    else
    {

        if (front == -1)

            front = 0;

        cin >> val;

        rear++;

        queue[rear] = val;
    }
}

void Delete()
{

    if (front == -1 || front > rear)
    {

        cout << "Queue Underflow ";

        return;
    }
    else
    {

        cout << "Element deleted from queue is : " << queue[front] << endl;

        front++;
        
    }
}

void Display()
{

    if (front == -1)

        cout << "Queue is empty" << endl;

    else
    {

        cout << "Queue elements are : ";

        for (int i = front; i <= rear; i++)

            cout << queue[i] << " ";

        cout << endl;
    }
}

int main()
{

    int ch;
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Insert the element in queue : " << endl;
    for (int i = 0; i < size; i++)
    {
        Insert();
    }
    Delete();
    Display();

    return 0;
}