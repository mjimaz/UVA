#include <stdio.h>
#include <string.h>

int main(){
	int length, i, ascii;
	int l,r,m;
	char s[250];

	while(gets(s)){
		length = strlen(s);
		ascii = s[0];
		if(ascii >= 48 && ascii <= 57){
			for(i=length-1;i>=0;i--){
				l = s[i]-'0';
				i--;
				r = s[i]-'0';
				ascii = l*10 + r;
				if(ascii < 13){
					i--;
					r = s[i]-'0';
					ascii = ascii*10 + r;
				}
				printf("%c",ascii);
			}
		}else{
			for(i=length-1;i>=0;i--){
				ascii = s[i];
				if(ascii > 99){
					r = ascii%10;
					l = ascii/10;
					m = l%10;
					l = l/10;
					printf("%d%d%d",r,m,l);
				}else{
					r = ascii%10;
					l = ascii/10;
					printf("%d%d",r,l);
				}
			}
		}
		printf("\n");
	}
		return 0;
}