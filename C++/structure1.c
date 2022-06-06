#include<stdio.h>
int main(){
    struct student{
        char name[10];
        int rollno;
    };
    struct student s[3];
    printf("Enter data of three students :\n");
    for(int i=0;i<3;i++){
        scanf("%s%d",s[i].name,&s[i].rollno);
    }
    for(int i=0;i<3;i++){
        printf("Name : %s\nRoll no. : %d\n",s[i].name,s[i].rollno);
    }
    return 0;
}