#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	int length;
	char c[10];
	int i;

	while(scanf("%s%c",&word,&c) != EOF){
		length = strlen(word);
		i=length-1;
		while(1){
			if(i < 0)
				break;
			printf("%c",word[i]);
			i--;
		}

		printf("%c",c[0]);
	}

	return 0;
}