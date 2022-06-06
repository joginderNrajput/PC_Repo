#include<stdio.h>
int main(){
    struct vector{
        int x;
        int y;
    };
    struct vector v1,v2;
    
    v1.x=34;
    v1.y=54;
    //printf("X dimension is : %d \nY dimension is : %d",v1.x,v2.y);
    printf("X dimension is : %d \nY dimension is : %d\n",v1.x,v1.y);
    v2.x=345;
    v2.y=549;
    printf("X dimension is : %d \nY dimension is : %d",v2.x,v2.y);
    return 0;
}