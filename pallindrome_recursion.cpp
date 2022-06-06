#include<iostream>
using namespace std;

bool pallindrome(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }else{
        return pallindrome(str, i+1, j-1);
    }
    return false;
}

int main(){
    string str = "abbccbbaa";
    cout<<"The string is : " << str <<endl;
   if( pallindrome(str, 0, str.length()-1)){
       cout<< str << "  String is the prallindrome. " << endl;
   }else{
       cout << str << "  String is not a pallindrome " << endl;
   }
   
    return 0;
}