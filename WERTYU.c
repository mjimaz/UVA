#include <stdio.h>
#include <string.h>

int main(){
	char word[1000];

	char l1[47] = {'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};

	int length;
	int j,k;
	while(gets(word)){
		length = strlen(word);

			for(k=0;k<length;k++){
				if(word[k] == ' '){
					printf(" ");
					continue;
				}
				for(j=0;j<47;j++){
					if(word[k] == l1[j]){
						printf("%c",l1[j-1]);
						break;
					}
				}
			}

		printf("\n");
	}
	return 0;
}