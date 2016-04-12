#include <stdio.h>
#include <string.h>

int main(){
	int testcases, length, i, temp, max;
	int letters[26];
	char s[210];

	scanf("%d", &testcases);
	getchar();
	while(testcases--){
		gets(s);
		length = strlen(s);

		for(i=0;i<26;i++)
			letters[i]=0;

		max=0;

		for(i=0;i<length;i++){
			temp = s[i]-'0';
			if(temp >= 17 && temp <= 42){
				letters[temp-17]++;
				if(letters[temp-17] > max)
					max = letters[temp-17];
			}else if(temp >= 49 && temp <= 74){
				letters[temp-49]++;
				if(letters[temp-49] > max)
					max = letters[temp-49];
			}
		}

		for(i=0;i<26;i++){
			if(letters[i] == max){
				printf("%c",(i+49+'0'));
			}
		}
		printf("\n");
	}
		return 0;
}