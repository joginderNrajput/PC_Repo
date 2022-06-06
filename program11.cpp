#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 128; i++){
        cout << "The ASCII value of the " << char(i) << " is : " << i << endl; 
    }
    return 0;
}