#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,a,m,b;
    scanf("%d%d%d",&x,&y,&m);
    a=pow(x,y);
    b=a%m;
    printf("%d",b);


}