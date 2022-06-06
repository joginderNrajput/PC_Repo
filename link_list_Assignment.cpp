#include<iostream>
using namespace std;

class node{
    public:
        int info;
        node* next;
};

int main(){
    node *first, *second, *third, *temp;
    first = new node();
    second = new node();
    third = new node();

    first->info = 22;
    first->next = second;

    second->info = 33; 
    second->next = third;

    third->info = 44;
    third->next = NULL;

    temp = first;

    cout<<"The linked list is : ";
    while(temp != NULL){
        cout<<temp->info<<" ";
        temp = temp->next;
    }

    return 0;
}
