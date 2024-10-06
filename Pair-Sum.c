#include<stdio.h>
int main()
{
    int n,fs,st,sum;
    scanf("%d",&n);
    if(n<99 || n>999){
        return 1;
    }
    fs=n/10;
    st=n%100;
    sum=fs+st;
    printf("%d",sum);
}