#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	int i;
	int position;
	int charValue;

	while(gets(word)){
		position = 1;
		charValue=0;
		if(word[0] == '_')
			continue;
		for(i=9;i>0;i--){
			if(word[i] == 'o'){
				charValue += position;
				position *= 2;
			}else if(word[i] == ' '){
				position *= 2;
			}
		}
		printf("%c",charValue);
	}

	return 0;
}