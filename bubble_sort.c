#include<stdio.h>
void getarray(int arr[], int n){
    printf("Enter the array : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

void printarray(int arr[], int n){
    printf("The array is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// void swap(int arr[],int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
void sortarray(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j+1] < arr[j]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            }
        }
    }
    printf("Array after sorting : ");
    printarray(arr, n);
}
int main(){
    int arr[6];
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("The size of the array is : %d \n",size);

    getarray(arr,size);
    printf("The array before sorting : ");
    printarray(arr, size);

    sortarray(arr, size);
    // printf("Array after sorting : ");
    // printarray(arr, size);

    return 0;
}