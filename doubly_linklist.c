#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void linklisttraversal(struct node *head)
{
    while (head != NULL)
    {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}
void linklistreversal(struct node *last)
{
    while (last != NULL)
    {
        printf(" %d", last->data);
        last = last->prev;
    }
    printf("\n");
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));
    struct node *sixth = (struct node *)malloc(sizeof(struct node));

    head->data = 33;
    head->prev = NULL;
    head->next = second;

    second->data = 44;
    second->prev = head;
    second->next = third;

    third->data = 55;
    third->prev = second;
    third->next = fourth;

    fourth->data = 66;
    fourth->prev = third;
    fourth->next = fifth;

    fifth->data = 77;
    fifth->prev = fourth;
    fifth->next = sixth;

    sixth->data = 88;
    sixth->prev = fifth;
    sixth->next = NULL;

    printf("The linklist in forward traversal : ");
    linklisttraversal(head);

    printf("Linllist in backward : ");
    linklistreversal(sixth);
    return 0;
}
