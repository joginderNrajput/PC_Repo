#include<stdio.h>
struct vector{
    int x;
    int y;
};
struct vector vectorsum(struct vector v1, struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y,v2.y;
    return result;
}
int main(){
    struct vector v1,v2,sum;
    v1.x=9;
    v1.y=7;
    printf("X dimesion is : %d\nY dimension is : %d\n",v1.x,v1.y);
    v2.x=4;
    v2.y=3;
    printf("X dimesion is : %d\nY dimension is : %d\n",v2.x,v2.y);
    sum = vectorsum(v1,v2);
    printf("After sum :\n");
    printf("X dimension is %d\nY dimension is %d",sum.x,sum.y);
    return 0;

}