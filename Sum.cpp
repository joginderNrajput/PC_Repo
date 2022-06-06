#include <iostream>
using namespace std;
//Function prototypes
int sumValue(int, int);
int sumReference(int &, int &);
int sumAddress(int *, int *);

//main Function
int main()
{
    int firstNum;
    int secondNum;
    cout << "Enter the first number : ";
    cin >> firstNum;
    cout << "Enter the second number : ";
    cin >> secondNum;
    int res1 = sumValue(firstNum, secondNum);
    cout << "The result after call by value : " << res1 << endl;
    int res2 = sumReference(firstNum, secondNum);
    cout << "The result after call by reference : " << res1 << endl;
    int res3 = sumAddress(&firstNum, &secondNum);
    cout << "The result after call by Address : " << res1 << endl;

    return 0;
}

//Funciton definitions;
int sumValue(int a, int b)
{
    return a + b;
}

int sumReference(int &a, int &b)
{
    int res = a + b;
    return res;
}

int sumAddress(int *a, int *b)
{
    return *a + *b;
}