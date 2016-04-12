#include <stdio.h>
#include <string.h>

int main(){
	char c[15];
	int cases = 1;

	while(1){
		gets(c);
		if(c[0] == '#')
			break;

		printf("Case %d: ", cases);
		if(strcmp(c,"ZDRAVSTVUJTE")==0)
			printf("RUSSIAN\n");
		else if(strcmp(c,"CIAO")==0)
			printf("ITALIAN\n");
		else if(strcmp(c,"BONJOUR")==0)
			printf("FRENCH\n");
		else if(strcmp(c,"HALLO")==0)
			printf("GERMAN\n");
		else if(strcmp(c,"HOLA")==0)
			printf("SPANISH\n");
		else if(strcmp(c,"HELLO")==0)
			printf("ENGLISH\n");
		else
			printf("UNKNOWN\n");
		cases++;
	}
	return 0;
}