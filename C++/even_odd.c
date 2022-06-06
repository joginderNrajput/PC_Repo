#include <stdio.h>
int main()
{
    int arr[10], even =0, odd =0;
    printf("Enter the elements : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
             odd++;
        }
    }
    printf("The Even elements are : ");
    for(int i=0; i<10; i++){
        if(arr[i]%2 == 0){
            printf("%d ",arr[i]);
        }
    }
    printf("\nThe Odd elements are : ");
    for(int i=0; i<10; i++){
        if(arr[i]%2 != 0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    printf("The total number of even elements are : %d", even);
    printf("\nThe total number of odd elements are  : %d", odd);

    return 0;
}