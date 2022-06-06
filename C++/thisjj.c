
#include<stdio.h>
#include<conio.h>
int main(){
	
int age;
printf("Enter the age : ");
scanf("%d",&age);
char marital_status = getchar();
printf("\nEnter the Marital Status :");
scanf("%c",&marital_status);
char gender = getchar();
printf("\nEnter the gender of a person : ");
scanf("%c",&gender);

if ((marital_status =='M') || (marital_status=='U' && gender == 'M' && age>30)|| (marital_status == 'U' && gender == 'F' && age >25))
printf("Driver should be insured\n");
else
printf("Driver should not be insured\n");
	
	return 0;
}