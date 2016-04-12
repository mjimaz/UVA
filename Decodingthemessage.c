#include <stdio.h>
#include <string.h>

int main(){
	char word[2000];
	int i=1,j,k, nl=0;
	int cases;
	int length, position, wno, count;

	scanf("%d",&cases);
	getchar();

	while(cases >= 0){


			gets(word);
			length = strlen(word);


			if(length == 0){
				cases--;

				if(cases >= 0){
					if(nl==1)
						printf("\n");
					printf("Case #%d:\n",i);
					nl=1;
				}
				i++;
			}else{
				j=0;
				wno=0;
				k=0;
				count=1;
				while(j < length){
					if(word[j] == ' '){
						k=0;
						if(count == 0){
							wno++;
							count=1;
						}
					}else{

						if(k == wno){
							count=0;
							printf("%c",word[j]);
						}
						k++;
					}
					j++;
				}

				printf("\n");
			}
	}

	return 0;
}