#include<iostream>
using namespace std;
void print(int *arr, int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool binarySearch(int *arr, int start, int end, int key){
    cout<<endl;
    print(arr, start, end);
    if(start>end){
        return false;
    }
    int mid = start + (end-start)/2;
    cout<<"The mid element is : "<<arr[mid]<<endl;
    if(arr[mid] == key){
        return true;
    }
    
    if(key > arr[mid]){
        return binarySearch(arr, mid+1, end, key);
    }else{
        return binarySearch(arr, start, mid-1, key);
    }
}

int main(){
    int arr[5] = {5,6,8,99,188};
    int size = 5;
    int key = 188;
    if(binarySearch(arr, 0, size-1, key)){
        cout<<"The element is Present in the array !"<<endl;
    }else{
        cout<<"The element is not present in the array !"<<endl;
    }
    return 0;
}

