#include<stdio.h>
int linearsearch(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(arr[i] == element){
           return i;
        }
        
    }
   return -1;
}       
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int x =5;
    int res = linearsearch(arr, size, x);
    printf("The element %d is found at index %d", x, res);
    
    return 0;
}