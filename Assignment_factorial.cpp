#include <iostream>
using namespace std;

void factorial(int n)
{
    int result = 1;
    if (n >= 0)
    {
        for (int i = n; i > 0; i--)
        {
            result = result * i;
        }
        cout << "Factorial of " << n << " is : " << result << endl;
    }
    else
    {
        cout << "factorial of negative number is not possible !" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    factorial(n);
    return 0;
}