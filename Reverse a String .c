#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    scanf("%[^\n]s",str);
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i<length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }


    printf("%s",str);
    
}