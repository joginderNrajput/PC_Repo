#include<iostream>
using namespace std;

int main(){
    float days;
    cout << "Enter the days : ";
    cin >> days;
    cout << "Days into years is : " << days/365 << endl;
    cout << "Days into weeks is : " << days/7 << endl;

    return 0;
}