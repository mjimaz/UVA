#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, temp;
	char newchar;
	char* str = (char*) malloc(sizeof(char) * 1000000);

	while(gets(str)){
		for (i = 0; str[i]; i++){
			temp = (int)str[i];

				newchar = (char)(temp-7);
				printf("%c",newchar);

		}
		printf("\n");

	}
	return 0;
}