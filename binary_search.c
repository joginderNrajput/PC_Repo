#include <stdio.h>
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    high = size - 1;
    low = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
        
    }
    return -1;
}
    int main()
    {
        int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
        int size = sizeof(arr) / sizeof(int);
        int element = 55;
        int res = binarysearch(arr, size, element);
        printf("The element  %d is found at index %d", element, res);
        return 0;
    }