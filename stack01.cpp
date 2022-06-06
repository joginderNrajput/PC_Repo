#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(9);
    s.push(6);
    s.pop();
    cout << "Top element is : " << s.top() << endl;
    if(s.empty()){
        cout << "Stack is empty " << endl;
    }else {
        cout << "Stack is not empty " << endl;
    }
    cout << "Size of the stack is  : " << s.size() << endl;
    return 0;

}