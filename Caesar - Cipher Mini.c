#include<stdio.h>
int main()
{
char ch;
int k;
scanf("%c",&ch);
scanf("%d",&k);
char result=(ch-'a'+k) % 26 +'a';
printf("%c",result);
}