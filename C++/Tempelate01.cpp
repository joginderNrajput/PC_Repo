#include<iostream>
using namespace std;

template< class T1 = int, class T2 = float>
class joginder{
    public:
    T1 a;
    T2 b;
    joginder(T1 x, T2 y){
        a = x;
        b = y;
    }
    void display(){
        cout <<"The value of A is : "<<a<<endl;
        cout <<"The value of b is : "<<b<<endl;
    }
};

int main(){
    joginder<> h(8, 8.3);
    h.display();
    return 0;
}