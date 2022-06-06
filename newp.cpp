#include <iostream>
using namespace std;

class fibNumbers
{
protected:
    int arr[10];

public:
    void setFib(int n)
    {
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    void print()
    {
        cout << "The fibonacci numbers are : ";
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int SumOfFib()
    {
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum = sum + arr[i];
        }
        return sum;
    }
};



int main()
{
    fibNumbers f;
    f.setFib(34);
    f.print();
    cout << "The sum of the fibonacci numbers is : " << f.SumOfFib() << " " << endl;
    return 0;
}