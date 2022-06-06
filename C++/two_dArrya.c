#include<stdio.h>
int main(){
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The array is : ");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}