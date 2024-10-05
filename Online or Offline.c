#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(m>n-(0.1*n)){
        printf("ONLINE");
    }
    else if(m<n-(0.1*n)){
        printf("DINING");
    }
    else{
        printf("EITHER");
    }

}