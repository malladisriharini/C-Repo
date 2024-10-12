#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int total_income=1 << x;
    int spent=0;
    int remaining=total_income;
    spent=remaining*0.5;
    remaining-=spent;
    for(int i=2;i<=n;i++){
        spent=remaining*0.5;
        remaining-=spent;
    }
    printf("%d",remaining);
}