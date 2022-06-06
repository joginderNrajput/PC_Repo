#include <iostream>
#include <algorithm>
using namespace std;
int kthelement(int arr[], int n, int k)
{
    //firstly we have to sort the unsorted array
    sort(arr, arr + n);
    //Now return the kth element
    return arr[k - 1];
}
int main()
{
    int arr[] = {33, 44, 55, 999, 6, 11};
    int n = 6, k = 5;
    int result = kthelement(arr, n, k);
    cout << "The kth element is : " << result << endl;
    return 0;
}