#include<stdio.h>
int main(){
    struct employee{
        char name[15];
        int age;
        float salary;
    };
    struct employee e1;
    printf("Enter the name, age, salary :");
    scanf("%s%d%f",e1.name,&e1.age,&e1.salary);
    printf("The age, name, salary is :%s,%d,%f",e1.name,e1.age,e1.salary);
}