#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int avg1=400/x;
   int avg2=400/y;
   int avg3=400/z;
    if(avg1>avg2 && avg1>avg3){
        printf("ALICE");
    }
    else if(avg2>avg1 && avg2>avg3){
        printf("BOB");
    }
    else{
        printf("CHARLIE");
    }
}