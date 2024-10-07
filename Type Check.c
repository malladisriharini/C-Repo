#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        printf("Alphabet");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else if(ch==' '){
        printf("Space");
    }
    else{
        printf("Special Character");
    }
}