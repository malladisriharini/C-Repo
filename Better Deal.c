#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if((100-a)<(200-2*b)){
        printf("FIRST");
    }
    else if((100-a)>(200-2*b)){
        printf("SECOND");
    }
    else{
        printf("BOTH");
    }
}