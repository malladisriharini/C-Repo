#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(y<=(15*x)/2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}