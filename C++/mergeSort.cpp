#include <iostream>
using namespace std;

void merge(int arr[], int mid, int low, int high)
{
    int i, j, k, arr1[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            arr1[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr1[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        arr1[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        arr1[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i < high; i++)
    {
        arr[i] = arr1[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
    cout << endl;
}

void printArray(int arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{

    int arr[10] = {1, 9, 55, 99, 3, 44, 66, 2, 22, 11};
    int size = 10;
    printArray(arr, size);
    mergeSort(arr, 0, 9);
    printArray(arr, size);
    return 0;
}