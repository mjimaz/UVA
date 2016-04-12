#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int testcases;
	int length, t;
	char s[605];
	int M,A,R,G,I,T, pizza;

	scanf("%d", &testcases);
	getchar();

	while(testcases-- > 0){
		gets(s);
		length = strlen(s);
		M=0;
		A=0;
		R=0;
		G=0;
		I=0;
		T=0;
		pizza=0;

		for(t=0;t<length;t++){
			if(s[t] == 'M')
				M++;
			else if(s[t] == 'A')
				A++;
			else if(s[t] == 'R')
				R++;
			else if(s[t] == 'G')
				G++;
			else if(s[t] == 'I')
				I++;
			else if(s[t] == 'T')
				T++;
		}
		while(M >=1 && A >= 3 && R >=2 && G >=1 && I >= 1 && T >=1){
			pizza++;
			M--;
			A -=3;
			R -=2;
			G--;
			I--;
			T--;
		}
		printf("%d\n",pizza);
	}
	return 0;
}