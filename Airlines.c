#include<stdio.h>
int main()
{
    int x,y,z,passengers;
    scanf("%d%d%d",&x,&y,&z);
int max_seats=x*10;
if(y<=max_seats){
    passengers=y;
}
    else{
passengers=max_seats;
    }
   int max_amount=passengers*z;
    printf("%d",max_amount);
}
