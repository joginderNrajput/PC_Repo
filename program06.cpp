#include<iostream>
using namespace std;
int main(){
    int a = 9;
    float b = 7.7;
    double c = 99;
    char d = 'd';
    long long e = 9;
    cout << "Size of the int is : " << sizeof(a) << endl;
    cout << "Size of the float is : " << sizeof(b) << endl;
    cout << " Size of the double is : " << sizeof(c) << endl;
    cout << "Size of the char is : " << sizeof(d) << endl;
    cout << "Size of the long long is : " << sizeof(e) << endl;
    return 0;
}