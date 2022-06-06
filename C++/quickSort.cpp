#include <iostream>
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

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    } while (i < j);
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partionIndex;
    if (low < high)
    {
        partionIndex = partition(arr, low, high);
        quickSort(arr, low, partionIndex - 1);
        quickSort(arr, partionIndex + 1, high);
    }
}

int main()
{
    int arr[10] = {1, 9, 55, 99, 3, 44, 66, 2, 22, 11};
    int size = 10;
    cout << "The array before sorting : " << endl;
    printArray(arr, size);
    cout << "The array after Sorting : " << endl;
    quickSort(arr, 0, 9);
    printArray(arr, size);

    return 0;
}