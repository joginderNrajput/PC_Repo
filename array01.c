// Find a pair with a given sum in an array
#include <stdio.h>
void find(int arr[], int n, int sum);

int main(void)
{
    int n, sum;

    printf("Enter the number of elements and the sum :");
    scanf("%d%d", &n, &sum);
    int arr[6];
    printf("Enter the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    find(arr, n, sum);
    return 0;
}
void find(int arr[], int n, int sum)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j = i + 1; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("Number found : %d %d", arr[i], arr[j]);
            }
        }
        printf("NUMBER NOT FOUND!");
    }
}
