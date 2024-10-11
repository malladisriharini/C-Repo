#include<stdio.h>
int main()
{
    int x,y,amount=0;
    scanf("%d%d",&x,&y);
    if(y<=x){
        amount=y*1;
        printf("%d",amount);
    }
    else if(y>=x ){
      int total_amount=x+(y-x)*2;
       printf("%d",total_amount);
    }
}