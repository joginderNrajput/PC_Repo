#include<stdio.h>
int main(){
    int arr1[5],arr2[5],SumArray[5];

    printf("Enter the first array : ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the second array : ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr2[i]);
    }
    printf("The Sum of the array is : ");
    for(int i=0; i<5; i++){
        SumArray[i] = arr1[i] + arr2[i];
        printf("%d ",SumArray[i]);
    }
    return 0;
}