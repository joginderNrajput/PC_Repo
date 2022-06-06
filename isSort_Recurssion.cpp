#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool next = isSorted(arr+1,size-1);
        return next;
    }
}
int main(){
    int arr[5] = {1,9,4,5,7};
    int size = 5;
    if(isSorted(arr,5)){
        cout<<"The array is sorted "<<endl;
    }else{
        cout<<"The array is not sorted "<<endl;
    }
}