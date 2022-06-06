#include<stdio.h>
#include<string.h>
void ispallindrome(char str[]){
    int l=0;
    int h=strlen(str)-1;
    while(h>l){
        if(str[l++]!=str[h--]){
        printf("%s is not a PALLINDROME STRING!\n",str);
        return;
    }
    }
    printf("%s is the PALLINDROME STRING!\n",str);
}
int main(){
    ispallindrome("iTopiNonAvevanoNipoti");
    ispallindrome("abba");
    ispallindrome("abbccbba");
    ispallindrome("abbccbbaq");
    return 0;
}