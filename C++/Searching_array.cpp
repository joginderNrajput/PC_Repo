#include<iostream>
using namespace std;
int searching(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of the Array :";
    cin>>size;
    int arr[size], key;
    
    cout<<"Enter the array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"The array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The index is : "<<searching(arr,5,8);
    return 0;
}