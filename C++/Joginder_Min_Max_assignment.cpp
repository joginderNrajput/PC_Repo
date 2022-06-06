// Write a program to find the minimum and maximum element of the array
#include <iostream>
using namespace std;

int main()
{
    int a[1000], n, min, max;

    printf("Enter size of the array : ");
    cin>>n;

    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    min = max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    cout<<"Minimum element is : "<<min<<endl;
    cout<<"Maximum element of the array is : "<<max<<endl;

    return 0;
}