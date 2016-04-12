#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int testcases, position, i,j;
	int instructions[110];
	char c[128];
	int num,l,k;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		position = 0;
		scanf("%d",&i);
		gets(c);
		j=1;
		while(j <= i){
			gets(c);

			if(c[0] == 'L'){
				instructions[j] = -1;
			}else if(c[0] == 'R'){
				instructions[j] = 1;
			}
			else{
				num=0;
				l=strlen(c);
				k=l-3;
				while(k<l){
					if(c[k]>='0'&&c[k]<='9')
				    	num=num*10+(c[k]-'0');
				    k++;
                }

				instructions[j] = instructions[num];
			}
			position += instructions[j];
			j++;
		}
		printf("%d\n",position);
		testcases--;
	}
	return 0;
}