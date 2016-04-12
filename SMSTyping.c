#include <stdio.h>
#include <string.h>

int main(){
	int cases, i=1, j, length, presses;
	char sms[110];

	scanf("%d",&cases);
	getchar();
	while(cases){
		gets(sms);
		length = strlen(sms);
		presses = 0;

		for(j=0;j<length;j++){
			if(sms[j] == 'a' ||sms[j] == 'd' ||sms[j] == 'g' ||sms[j] == 'j' ||sms[j] == 'm' ||sms[j] == 'p' ||sms[j] == 't' ||sms[j] == 'w' ||sms[j] == ' ')
				presses++;
			else if(sms[j] == 'b' ||sms[j] == 'e' ||sms[j] == 'h' ||sms[j] == 'k' ||sms[j] == 'n' ||sms[j] == 'q' ||sms[j] == 'u' ||sms[j] == 'x')
				presses+=2;
			else if(sms[j] == 'c' ||sms[j] == 'f' ||sms[j] == 'i' ||sms[j] == 'l' ||sms[j] == 'o' ||sms[j] == 'r' ||sms[j] == 'v' ||sms[j] == 'y')
				presses+=3;
			else if(sms[j] == 's' ||sms[j] == 'z')
				presses+=4;
		}

		printf("Case #%d: %d\n",i,presses);
		i++;
		cases--;
	}
	return 0;
}