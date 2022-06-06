#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (e >= s)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j= ans; j*j<n; j= j+factor){
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int tempSol = sqrtInteger(n);
    cout << "The Solution is : " << tempSol << endl;
    double ans = morePrecision(n, 3, tempSol);
    cout<<"The floating answer is : "<<ans<<endl;
    return 0;
}