#include <stdio.h>

void swaparray(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swaparray(&a[low], &a[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swaparray(&a[mid], &a[high]);
            high--;
            break;
        }
    }
}
void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {0, 1, 0, 0, 1, 0, 2, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    sort012(arr, size);
    printarray(arr, size);
    return 0;
}
