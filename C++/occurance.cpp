#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            end = mid + 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(int arr[], int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 6};
    int key = 3;
    pair<int, int> p = firstAndLastPosition(arr, 5, key);
    // cout<<"The answer is : " << p;
    cout<<"The Answer is :" <<p;
    return 0;
}
