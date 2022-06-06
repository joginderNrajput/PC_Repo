#include<iostream>
using namespace std;
int main(){
    float fahernheit;
    cout << "Enter the fahernheit : " ;
    cin >> fahernheit;
    float celsius = (fahernheit - 32) * 0.5556;
    cout << "The fahernheit in celcius : " << celsius << endl;
    return 0;
}