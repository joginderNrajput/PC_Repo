#include <stdio.h>
int main()
{
    union abc
    {
        int a;
        char b;
    } var;
    var.a = 65;
    var.b = '97';
    printf("%d", var.b);
    return 0;
}