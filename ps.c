#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char str[1005];
    int len, num,i;
    while(scanf("%s", &str) == 1) {
        if(!strcmp(str, "0"))
            break;
        len = strlen(str);
        num = str[0]-'0';
        if(len > 1 && len%2 == 0) num = num*10 + str[1]-'0';
        len = (len-1)/2;
        printf("%d", (int)sqrt(num));
        for(i = 0; i < len; i++)
            printf("0");
        printf("\n");
    }
    return 0;
}