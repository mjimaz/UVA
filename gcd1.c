#include <stdio.h>
#define max(a,b) (a>b)?a:b
int num[105];
int gcd(int a,int b)
{
    if(b)
        return gcd(b,a%b);
    return a;
}
int main()
{
    int c=0,i=0,j,k,m;
    char buffer[100];
    gets(buffer);
    while(buffer[i])
        c=c*10+buffer[i++]-'0';
    while(c--)
    {
        gets(buffer);
        i = 0;
        j = 0;
        while(buffer[i])
        {
            num[j]=0;
            while(buffer[i]&&buffer[i]!=' ')
                num[j]=num[j]*10 + buffer[i++]-'0';
            while(buffer[i]==' ')
                i++;
            j++;
        }
        m = 1;
        for(i=0;i<j;i++)
            for(k=i+1;k<j;k++)
                m = max(m,gcd(num[i],num[k]));
        printf("%d\n",m);
    }
    return 0;
}