#include<stdio.h>
int main(){
	int a;
	printf("Enter the number you want print table : ");
	scanf("%d",&a);
	printf("The multiplication is : \n");
	for(int i=1; i<=20; i++){
		printf("%d X %d = %d\n",a,i,a*i);
	}
	return 0;
}