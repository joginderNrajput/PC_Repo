// Cylically rotate an arry by one
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
// void set_array(int arr[], int n)
// {
//     printf("Enter the array : \n");
//     for(int i=0; i<=n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
// }
void rotate(int arr[], int n)
{
    // set_array(arr, n);
    int x = arr[n - 1];
    for (int i = n - 1; i >= 0; i++)
    {
        arr[i] = arr[i - 1];
    }
        arr[0] = x;
}
    // void rotate(int arr[], int n)
    // {
    //     int i = 0, j = n - 1;
    //     while (i != j)
    //     {
    //         swap(&arr[i], &arr[j]);
    //         i++;
    //     }
    // }

    void print_array(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    int main()
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        int n = sizeof(arr) / sizeof(arr[0]);
        // set_array(arr, n);
        printf("Array before rotating : \n");
        print_array(arr, n);
        printf("The array after rotating : \n");
        rotate(arr, n);
        print_array(arr, n);
        return 0;
    }