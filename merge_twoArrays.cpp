#include <iostream>
#include <algorithm>
using namespace std;

void merge(int *arr1, int *arr2, int n, int m)
{
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            swap(arr1[i--], arr2[j++]);
        }
        else
        {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}
int main()
{
    int arr1[5]{1, 3, 5, 7, 8};
    int arr2[6] = {2, 4, 6, 8, 9, 10};
    cout << "Array before mergin : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    merge(arr1, arr2, 5, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl
         << "Array after merging : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}