#include<stdio.h>
int main()
{
    int x,y,t=0;
    scanf("%d%d",&x,&y);
    if(y>=x){
        return 0;
    }
    int current_temp=y;
    int increment=0;
    while(current_temp<x){
        t++;
        increment+=t;
        current_temp=y+increment;
    }
    printf("%d",t);
 



}
