#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(islower(ch)){
        printf("%c",toupper(ch));
    }
    else if(isupper(ch)){
        printf("%c",tolower(ch));
    }

    
    
}