#include<stdio.h>
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indarray(int arr[], int size, int element, int position, int capacity){
    if(size>capacity){
        return -1;
    }
    else{
        for(int i = size; i>=position;i--){
            arr[i+1] = arr[i];
        }
        arr[position] = element;
    }
}
int main(){
    int arr[20] = {11,22,33,44,66,};
    
    int size = 5, element = 55, position = 4;
    printarray(arr, size);
    indarray(arr, size, element, position, 100);
    size+=1;
    printarray(arr, size);
    return 0;

}
