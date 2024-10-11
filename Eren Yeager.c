#include<stdio.h>
int main()
{
    int n,a,b,total=0;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            total+=a;
        }
        else{
            total+=b;
        }
    }
    printf("%d",total);
}