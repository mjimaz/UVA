#include <stdio.h>
#include <string.h>

int main(){
	int cases, length, i;
	char s[90];

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
				if(s[i] == '1')
					printf("I");
				else if(s[i] == '2')
					printf("Z");
				else if(s[i] == '3')
					printf("E");
				else if(s[i] == '4')
					printf("A");
				else if(s[i] == '5')
					printf("S");
				else if(s[i] == '6')
					printf("G");
				else if(s[i] == '7')
					printf("T");
				else if(s[i] == '8')
					printf("B");
				else if(s[i] == '9')
					printf("P");
				else if(s[i] == '0')
					printf("O");
				else
					putchar(s[i]);
			}
			printf("\n");
		}

		cases--;
	}



	return 0;
}