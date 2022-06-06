#include<iostream>
using namespace std;

struct employee{
    private:
        int id;
        int salary;
    public:
        char name[20];

    void setData(){
        cout << "Enter the data of the array : ";
       cin >> id >> salary >> name;
    }
    void display(){
        cout << "Id is : " << id << endl << "Salary is : " << salary << endl << "Name is : " << name << endl;
    }
};

int main(){
    employee e;
    e.setData();
    e.display();
    return 0;
}