#include<stdio.h>
int main(){
    char str[10],ch;
    scanf("%[^\n]s",str);
    if(str[6]!='\0'){
        char ch=str[6];
        printf("%c",ch);
    }
}