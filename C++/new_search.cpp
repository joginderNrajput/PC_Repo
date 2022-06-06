#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int end = size;
    int start =0;
    while( start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        
    }
    return -1;
}

int main(){
    int size; 
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<"Enter the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The index is : "<<binarySearch(arr,size,key);
    return 0;

}