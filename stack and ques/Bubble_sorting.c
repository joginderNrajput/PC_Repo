#include<stdio.h>
void sorting(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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