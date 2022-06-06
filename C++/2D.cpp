#include<iostream>
using namespace std;
void rowSum(int arr[][3],int row,  int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int largestSum(int arr[][3],int row, int col){
    int maxi = INT_MIN;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum+arr[i][j];
        }
       if(sum>maxi){
           maxi = sum;
       }
    }
    // cout<<maxi;
    return maxi;
}

int main(){
    int arr[3][3];
    cout<<"Enter the elements of the array : ";
    for(int row = 0; row<3; row++){
        for(int col = 0; col<3; col++){
            cin>>arr[row][col];
        }
    }
     cout<<"The sum is  --> ";
     rowSum(arr, 3,3);
     int res = largestSum(arr, 3,3);
     cout<<"The largest sum of the  row is  --> "<<res;;
     return 0;
}