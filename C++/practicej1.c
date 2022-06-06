#include<stdio.h>
int main(){
    char str[10];
    int a=10;
    char b ='e';
    printf("The value of a and b is :%d and %c\n",a,b);
    sprintf(str,"%d%c",a,b);
    printf("%s",str);
    return 0;
}