#include<bits/stdc++.h>
using namespace std;
int getSum(int *arr, int size){
     if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }else{
        int remainingPart = getSum(arr+1, size-1);
        int sum = arr[0] + remainingPart;
        return sum;
    }
}
int main(){
    int arr[5] = {1,9,4,5,7};
    int size = 5;
    cout<<"The sum is :-> "<<getSum(arr,size);
    return 0;
   
}