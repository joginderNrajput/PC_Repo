#include<stdio.h>
int main (){
    char c;
    FILE *fp;
    fp=fopen("sample.txt","w");
    if(fp==NULL){
        printf("cannot open file");
        return;
    }
    while((c=getcar())=EOF){
        putc(c,fp);
    }
    fclose(fp);
    fp=fopen("sample.txt","r");
    while((c=getc(fp))=EOF){
        printf("%c",c);
    }
    return 0;
}