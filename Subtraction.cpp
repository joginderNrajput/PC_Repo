#include <iostream>
using namespace std;
//Function prototypes
int subtractionValue(int, int);
int subtracitonReference(int &, int &);
int subtractionAddress(int *, int *);

//main Function
int main()
{
    int firstNum;
    int secondNum;
    cout << "Enter the first number : ";
    cin >> firstNum;
    cout << "Enter the second number : ";
    cin >> secondNum;
    int res1 = subtractionValue(firstNum, secondNum);
    cout << "The result after call by value : " << res1 << endl;
    int res2 = subtracitonReference(firstNum, secondNum);
    cout << "The result after call by reference : " << res1 << endl;
    int res3 = subtractionAddress(&firstNum, &secondNum);
    cout << "The result after call by Address : " << res1 << endl;

    return 0;
}

//Funciton definitions;
int subtractionValue(int a, int b)
{
    return a - b;
}

int subtracitonReference(int &a, int &b)
{
}

int subtracitonReference(int &a, int &b)
{
}

int subtracitonReference(int &a, int &b)
{
}

int subtracitonReference(int &a, int &b)
{
}

int subtracitonReference(int &a, int &b)
{
    int res = a - b;
    return res;
}

int subtractionAddress(int *a, int *b)
{
    return *a - *b;
}