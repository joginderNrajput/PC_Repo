#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
    int mid =  + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }else{
            e = mid;
        }
        //  mid = s + (e-s)/2;
    }
    return s;
}

void printArray(int arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main(){
     int arr[10] = {99, 3, 44, 66, 2, 22, 11, 1, 9, 55};
    int size = 10;
    printArray(arr, size);
    int ans = getPivot(arr, 10);
    cout<<"The Pivot answer is : "<<ans<<endl<<"And the Value is : "<<arr[ans];
    return 0;
}