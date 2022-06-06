// Joginder Singh
// Roll no. 21UFIE2002
// Write a basic c++ program to find greater number (between three given numbers and take the input from user )

#include<iostream>
using namespace std;
int main() {
	int num1,num2,num3;
	cout<<" Enter first number : ";
	cin>>num1;
	cout<<" Enter second number : ";
	cin>>num2;
	cout<<" Enter third number : ";
	cin>>num3;
	if(num1>num2&&num1>num3) {
		cout<<" First number is greatest "<<endl<<"The number is : "<<num1;
	} else if(num2>num1&&num2>num3) {
		cout<<" Second number is greatest"<<endl<<"The number is : "<<num2;
	} else {
		cout<<" Third number is greatest"<<endl<<"The number is : "<<num3;
	}
	return 0;
}