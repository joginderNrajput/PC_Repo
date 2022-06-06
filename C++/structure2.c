#include<stdio.h>
int main(){
    union student{
        char name[10];
        int rollno;
    };
    union student e;
    printf("Enter the data of the student :");
    scanf("%s%d",e.name,&e.rollno);
    printf("Name : %s\nRolln no. : %d",e.name,e.rollno);
    return 0;
}