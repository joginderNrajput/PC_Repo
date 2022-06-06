#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The value of n after post-increment : " << n++ << endl;
    cout << "The value of n after post-decrement : " << n-- << endl;
    cout << "The value of n after pre-increment : " << ++n << endl;
    cout << "The value of n after pre-decrement : " << --n << endl;
    return 0;
}