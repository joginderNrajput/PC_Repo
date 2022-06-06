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
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *deleteatfirst(struct node *head)
{
    struct node *ptr;
    head = head->next;
    free(ptr);
    return head;
}
struct node *deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *deleteatend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct node *deleteatvalue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    // Allocate memory
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = fifth;

    fifth->data = 9;
    fifth->next = NULL;

    printf("Link list before deletion :");
    linklisttraversal(head);

    printf("Link list after deletion at first : ");
    head = deleteatfirst(head);
    linklisttraversal(head);

    printf("Linklist after deletion at a given index : ");
    head = deleteatindex(head, 2);
    linklisttraversal(head);

    printf("Linklist after deleting at the end : ");
    head = deleteatend(head);
    linklisttraversal(head);

    printf("Linklist after delete at the value : ");
    head = deleteatvalue(head, 7);
    linklisttraversal(head);

    return 0;
}