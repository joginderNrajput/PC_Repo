#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the number of integers you want to enter :");
    scanf("%d",&n);
    ptr = (int *)calloc(30,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of %dth element is \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("The value of the %dth element is %d\n",i,ptr[i]);
    }
    return 0;
}