#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << arr[i];
   }
}

int binarySearch(int arr[], int size, int key)
{
   int start = 0;
   int end = size - 1;
   while (start <= end)
   {
   int mid = start + (end-start)/2;
      if (key == arr[mid])
      {
         return mid;
      }
     if (key > arr[mid])
      {
         start = mid+1;
      }
      else
      {
         end = mid-1;
      }
      // mid = (start+end)/2;
   }
   return -1;
}

int main()
{
   int arr[100];
   int n;
   cout << "Enter the size of the array : ";
   cin >> n;
   cout << "Enter the elements of the array : ";
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int key;
   cout << "Enter the key : ";
   cin >> key;
   int ans = binarySearch(arr, n, key);
   // printArray(arr, n);
   if (ans == -1)
   {
      cout << "The key is not present in the array!";
   }
   else
   {
      cout << "The key " << arr[ans] << " is Present at the index : " << ans;
   }
   return 0;
}