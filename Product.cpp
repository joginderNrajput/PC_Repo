#include <iostream>
using namespace std;
//Function prototypes
int productValue(int, int);
int productReference(int &, int &);
int productAddress(int *, int *);

//main Function
int main()
{
    int firstNum;
    int secondNum;
    cout << "Enter the first number : ";
    cin >> firstNum;
    cout << "Enter the second number : ";
    cin >> secondNum;
    int res1 = productValue(firstNum, secondNum);
    cout << "The result after call by value : " << res1 << endl;
    int res2 = productReference(firstNum, secondNum);
    cout << "The result after call by reference : " << res1 << endl;
    int res3 = productAddress(&firstNum, &secondNum);
    cout << "The result after call by Address : " << res1 << endl;

    return 0;
}

//Funciton definitions;
int productValue(int a, int b)
{
    return a * b;
}

int productReference(int &a, int &b)
{
    int res = a * b;
    return res;
}

int productAddress(int *a, int *b)
{
    return *a * *b;
}