#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linklisttraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node * insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = head;
    linklisttraversal(head);

    printf("Linklist after traversal at first : \n");
    head = insertatfirst(head, 77);
    head = insertatfirst(head, 88);
    head = insertatfirst(head, 99);
    linklisttraversal(head);
    return 0;
}