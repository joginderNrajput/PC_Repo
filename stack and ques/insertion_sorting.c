#include<stdio.h>
void sorting(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
       int temp = arr[i];
       int j = i-1;
       while(j>=0 && arr[j]>temp){
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = temp;
    }
    
}
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting : ");
    for (int i = 0; i <size; i++)
    {
       printf("%d  ",arr[i]);
    }
    sorting(arr, size);
    printf("Array after sorting : ");
    for (int i = 0; i <size; i++)
    {
       printf("%d  ",arr[i]);
    }
    return 0;
}