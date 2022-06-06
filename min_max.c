#include <stdio.h>
struct pair
{
    int min;
    int max;
};
struct pair getminmax(int arr[], int n)
{
    struct pair minmax;
    //if there is only one element in an array
    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    //if there are two elements in an array
    if (arr[1] > arr[0])
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    else if (arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    //if there are more than two elements in an array
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main()
{
    int arr[] = {111, 2, 44, 56, 77777, 999};
    int arr_size = 6;
    struct pair minmax = getminmax(arr, arr_size);
    printf("The minimum element is : %d\n ", minmax.min);
    printf("The maximum element is : %d\n", minmax.max);
    return 0;
}