#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linklisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct node *inseratindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertafternode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for all these nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link first node and second
    head->data = 11;
    head->next = second;

    second->data = 5656;
    second->next = third;

    third->data = 55;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;
    printf("Linked list befoe insertion :\n");
    linklisttraversal(head);

    printf("Linked list after insertion at the first : \n");
    head = insertatfirst(head, 999);
    linklisttraversal(head);

    printf("Linked list after insertion at the index :\n");
    head = inseratindex(head, 604, 2);
    linklisttraversal(head);

    printf("Linked list after insertion at the end : \n");
    head = insertatend(head, 909);
    linklisttraversal(head);

    printf("Linkedlist after insertion after node : \n");
    head = insertafternode(head, second, 900);
    linklisttraversal(head);

    return 0;
}