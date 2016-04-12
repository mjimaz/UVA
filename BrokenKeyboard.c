#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char sentence[200];
	char alphabets[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char broken[100];
	int letters[26] = {0};
	int Keyboards = 1, printableLines;
	int canPrint,i, length, spaces;

	printf("+----------+----------------+-----------------------------+\n");
	printf("| Keyboard | # of printable | Additionally, the following |\n");
	printf("|          |      lines     |  letter keys can be broken  |\n");
	printf("+----------+----------------+-----------------------------+\n");

	while(1){
		gets(broken);

		if(strcmp(broken,"finish") == 0)
			break;
		printableLines=0;

		length = strlen(broken);

		for(i=0;i<length;i++){
			letters[tolower(broken[i])-'0'-49] = Keyboards;
		}


		while(1){
			gets(sentence);
			canPrint = 1;

			for(i=0;i<length;i++){
				if(strchr(sentence,tolower(broken[i])) != NULL || strchr(sentence,toupper(broken[i])) != NULL){
					canPrint=0;
					break;
				}
			}
			printableLines +=canPrint;

			if(canPrint==1){
							for(i=0;i<26;i++){
								if(strchr(sentence,alphabets[i]) != NULL || strchr(sentence,toupper(alphabets[i])) != NULL){
									letters[i] = Keyboards;
								}
							}
			}

			if(strcmp(sentence,"END") == 0){
				printf("|   %3d    |      %3d       | ",Keyboards, printableLines);
				spaces=0;
				for(i=0;i<26;i++){
					if(letters[i] < Keyboards){
						printf("%c",alphabets[i]);
						spaces++;
					}
				}
				for(i=1;i<29-spaces;i++)
					printf(" ");
				printf("|\n+----------+----------------+-----------------------------+\n");
				Keyboards++;
				break;
			}



		}
	}


	return 0 ;
}