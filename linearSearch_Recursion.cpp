#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int key)
{

    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {

        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[5] = {3, 5, 9, 4, 7};
    int size = 5;
    int key = 4;
    if (linearSearch(arr, size, key))
    {
        cout << "The element is present in the array !" << endl;
    }
    else
    {
        cout << "The array is not present in the array !" << endl;
    }
    return 0;
}