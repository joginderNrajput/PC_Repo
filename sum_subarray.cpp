// Sum of the largest subarray using kadane's Algorithm
#include <iostream>
#include <limits>
using namespace std;
int largearraysum(int arr[], int n)
{
    int max_ending_here = 0;
    int max_so_far = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The array is : \n");
    printarray(arr, size);
    int result = largearraysum(arr, size);
    printf("\nThe sum of the largest subarray is : %d", result);
    return 0;
}