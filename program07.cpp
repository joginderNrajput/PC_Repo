#include<iostream> 
using namespace std;
#define PI 3.14

int main(){
    float r;
    float pi = 3.14;
    cout << "Enter the radius of the circle : " ;
    cin >> r;
    float area = PI * r * r;
    cout << "Area of the circle is : " << area << endl;

    return 0;
}