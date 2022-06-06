#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of the n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A';
            cout << ch << " ";
            ch = ch+1;
        }

        cout << endl;
    }
    return 0;
}