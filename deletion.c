#include <stdio.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indeletion(int arr[], int size, int position)
{
    for (int i = position; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[20] = {11, 22, 33, 44, 55};
    int size = 5, position = 2;
    printarray(arr, size);
    indeletion(arr, size, 2);
    size -= 1;
    printarray(arr, size);
    return 0;
}