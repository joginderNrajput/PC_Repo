#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "Joginder";
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        s.push(ch);
        
    }

    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "The answer is : " << ans << endl;

    return 0;
}