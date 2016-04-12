#include <stdio.h>
#include <string.h>

int main(){
	int cases, length, period=1;
	int i, j, k, start,w;
	char s[90];
	char temp[90];

	scanf("%d",&cases);
	getchar();

	while(cases){

		while(gets(s)){
			length = strlen(s);
			if(length == 0){
				printf("\n");
				break;
			}

			for(i=0;i<length;i++){

				for(j=0;j<=i;j++){
					temp[j] = s[j];
				}
				start = j;
				w = 0;
				for(k=start;k<;k++){
					if(s[w] != s[k])
				}
			}
			printf("%d\n",period);
		}

		cases--;
	}



	return 0;
}