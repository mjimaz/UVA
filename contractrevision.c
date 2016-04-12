#include <stdio.h>
#include <string.h>

int main(){
	char d;
	char n[1000];
	int length;
	int i,j;
	char temp[10];

	while(1){
		scanf("%c %s",&d,&n);

		if(d == '0')
			break;

		length = strlen(n);
		j=0;

		for(i=0;i<length;i++){
			if(n[i] != d){
				if(n[i] != '0' || j == 1){
					printf("%c",n[i]);
					j=1;
				}
			}
		}
		if(j == 0)
			printf("0");

		printf("\n");
		gets(temp);

	}
	return 0;
}
