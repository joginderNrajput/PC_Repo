#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
int main(){
    struct node *head ;
    struct node * newnode;
    struct node * temp;
    head = NULL;
    int choice;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :");
        scanf("%d",&newnode->data);
        if(newnode == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
     temp = head;
     while(temp != NULL){
         printf("%d",temp->data);
         temp = temp->next;
    }
     return 0;
}