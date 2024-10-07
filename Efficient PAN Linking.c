#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int officers=20;
    int unprocessed=n% officers;
    printf("%d",unprocessed);
}