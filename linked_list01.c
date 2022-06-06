#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printlist(struct node *n)
{
    while (n != NULL)
    {
        printf("Element : %d\n", n->data);
        n = n->next;
    }
}
int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    // Allocate  space
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 33;
    head->next = second;

    second->data = 65;
    second->next = third;

    third->data = 66;
    third->next = NULL;

    printlist(head);
    return 0;
}