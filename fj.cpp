#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number for which you want to generate a multiplication table : ";
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        cout << n << " X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}