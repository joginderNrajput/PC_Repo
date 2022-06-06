#inlcude<stdio.h>
int main(){
    struct address{
        char colony[10];
        char city[10];
        int pin;
    };
    struct employee{
        char name[10];
        struct address addr;
    };
    struct employee e;
    //printf("Enter the required :");
     printf("%s,%s,%d,%s",e.name,e.addr.colony,e.addr.city,e.addr.pin,);
}