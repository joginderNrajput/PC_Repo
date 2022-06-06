// C++ program to calculate the sum, product and average of the 10 elemets
#include <iostream>
using namespace std;

int product(float arr[], int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * arr[i];
    }
    return result;
}

int main()
{
    float avg = 0, arr[10], sum = 0;
    int n = 10;
    cout << "Enter the numbers : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of the elements is : " << sum << endl;
    avg = sum / n;
    cout << "Average of the elements is : " << avg << endl;
    cout << "Product of the elements is : " << product(arr, n);

    return 0;
}