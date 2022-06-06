#include <iostream>
using namespace std;
int main()
{
    int a = 66;
    int b = 33;
    cout << "The value of a is : " << a << " and the value of b is : " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "The value of a is : " << a << " and the value of b is : " << b << endl;
    return 0;
}