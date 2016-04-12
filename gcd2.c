#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0,i=0,j,k,a, b, n=0, temp;
    int* result = (int*) malloc(sizeof(int) * 100);
    int* num = (int*) malloc(sizeof(int) * 100);
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

       result[n] = 0;
        for(i=0;i<j;i++)
            for(k=i+1;k<j;k++){

                a = num[i];
				b = num[k];

				if(a < b){
					temp = b;
					b = a;
					a = temp;
				}

				while (b > 0){
					temp = b;
					b = a % b;
					a = temp;

				}
				if(a > result[n])
					result[n] = a;
			}
		n++;

    }
    for(i=0;i<n;i++)
    	printf("%d\n",result[i]);
    return 0;
}