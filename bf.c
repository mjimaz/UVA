#include <stdio.h>

int main() {
    int t, cases = 0;
    char cmd[100005];
    unsigned char mem[100] = {0};
    int idx, i;
    scanf("%d", &t);
    getchar();
    while(t--) {
        gets(cmd);
idx = 0;

        for(i = 0; cmd[i]; i++) {
            switch(cmd[i]) {
                case '>':idx++;break;
                case '<':idx--;break;
                case '+':mem[idx]++;break;
                case '-':mem[idx]--;break;
            }
            if(idx >= 100)  idx = 0;
            if(idx < 0) idx = 99;
        }
        printf("Case %d:", ++cases);
        for(i = 0; i < 100; i++)
            printf(" %02X", mem[i]);
        puts("");
    }
    return 0;
}