#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int binarySearch(int arr[], int size,  int key){
    int end = size-1;
    int start =0;
    while( start <= end){
        int mid = start + (end-start)/2;
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
   
    int arr[] = {1,2,3,4,5,6,7,8,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    
   int ans = binarySearch(arr, size,  99);
   if(ans == -1){
       cout<<"The element is not present in the array !"<<endl;

   }else{
       cout<<"The element is at index : "<<ans<<endl;
   }
    return 0;

}