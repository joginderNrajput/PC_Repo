#include<stdio.h>
struct cricketer
{
    int runs,matches,bowls;
    char name[25];
    float strike_rate;
}player[100];

// float strikerate(int bowls, int runs){
//     float z;
//     z =( runs/bowls)*100;
//     return z;
// }
 
void main()
{
    int i,n,s;
    printf("Enter the no of cricket players\n");
    scanf("%d",&n);
    printf("Enter player info as name , match played , runs scored ,bowls\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",player[i].name,&player[i].matches,&player[i].runs,&player[i].bowls);
    }
    printf("\nNAME\t\t\tMATCHES\t\t\tRUNS\t\t\tSTRIKE_RATE\n");
    
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\n",player[i].name,player[i].matches,player[i].runs);
    }
    for (int i = 0; i < n ; i++)
    {
        float s_rate = 0;
        s_rate = ((player[i].runs)/player[i].bowls)*100;
        printf("The Strike of the %d player is %d\n",i,s_rate);
    }
    
}