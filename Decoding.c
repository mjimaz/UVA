#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int testcases, i, c, j;
	int length, t;
	char s[210];
	int total, cases=1;

	scanf("%d", &testcases);
	getchar();

	while(testcases-- > 0){
		i=0;
		c=1;
		gets(s);
		length = strlen(s);
		printf("Case %d: ",cases);
		while(c <length){
			t = s[c]-'0';
			total = -1;
			while(t >=0 && t <= 9){
				if(total == -1)
					total = t;
				else
					total = total*10 + t;
				c++;
				if(c == length)
					break;
				t = s[c]-'0';
			}

			for(j=0;j<total;j++)
				printf("%c",s[i]);

			i=c;
			c++;
		}
		printf("\n");
		cases++;
	}
	return 0;
}