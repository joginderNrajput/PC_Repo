#include<iostream>
using namespace std;
int main(){
    float celcius;
    cout << "Enter the celcius : " ;
    cin >> celcius;
    float fahernheit = (celcius * 1.8) + 32;
    cout << "Celcius in fahernheit is : " << fahernheit << endl;
    return 0;
}