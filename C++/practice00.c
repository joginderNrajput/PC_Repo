// c program to reverse an array using recurssion
#include <stdio.h>
void reversearray(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reversearray(arr, start + 1, end - 1);
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Array before reversing :");
    printarray(arr, 6);
    reversearray(arr, 0, 5);
    printf("Reverse array is :");
    printarray(arr, 6);
    return 0;
}
