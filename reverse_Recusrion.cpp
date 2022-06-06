#include<iostream>
using namespace std;

void reverse(string &str, int i, int j){
    cout << "String reversing -> " << str << endl;
    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}
int main(){
    string str = "abcde";
    cout<<"The string is : " << str <<endl;
    reverse(str, 0, str.length()-1);
    cout << "String after reverse -> " << str  <<endl;
    return 0;
}