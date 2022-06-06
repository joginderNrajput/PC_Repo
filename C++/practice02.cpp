//Program to find the sum of the elements of the given array
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[], int n ){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int result = sum(arr,size);
    cout<<"The sum of the array is :"<<endl<<result;
    return 0;
}
