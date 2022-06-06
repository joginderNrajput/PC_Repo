#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the number for which you want to print table :\n");
    scanf("%d",&n);
    ptr = (int*)malloc(10*sizeof(int));
    printf("The table of %d is below :\n",n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,i*n);
    }
    printf("AFTER REALLOCATION\n");
     ptr = realloc(ptr,16*sizeof(int));
    printf("The table of %d is below :\n",n);
    for(int i=1;i<=16;i++){
        printf("%d X %d = %d\n",n,i,i*n);
    }
}