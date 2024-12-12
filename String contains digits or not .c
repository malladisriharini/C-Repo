#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char str[100];
    scanf("%s",str);
    int digit_found=0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            digit_found=1;
            break;
        }
    }
    if(digit_found){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    }
}