#include <iostream>
using namespace std;

class fibonacci
{
protected:
    int fib[10];

public:
    void settFibNumbers(int n)
    {
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
    void printFib()
    {
        cout << "The fibonacci numbers are : ";
        for (int i = 0; i < 10; i++)
        {
            cout << fib[i] << " ";
        }
        cout << endl;
    }
};

class fibonacci2 : public fibonacci
{
public:
    int sumOfFibonacci()
    {
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum = sum + fib[i];
        }
        return sum;
    }
};

int main()
{
    fibonacci2 f;
    // 34 will be the 10 fibonacci number in series of 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
    f.settFibNumbers(34);
    f.printFib();
    cout << "The sum of the fibonacci numbers is : " << f.sumOfFibonacci() << " " << endl;
    return 0;
}