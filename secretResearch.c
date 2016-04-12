#include <stdio.h>
#include <string.h>

int main(){
	int testCases, length;
	char S[200];


	scanf("%d",&testCases);

	getchar ();
	while(testCases-- > 0){
		gets(S);
		length = strlen(S);

		if((length <= 2)&&(S[0] == '1' || S[0] == '4' || (S[0] == '7' && S[1] == '8')))
			printf("+\n");
		else if(S[length-1] == '5' && S[length-2] == '3')
			printf("-\n");
		else if(S[0] == '9' && S[length-1] == '4')
			printf("*\n");
		else if(S[0] == '1' && S[1] == '9' && S[2] == '0')
			printf("?\n");
	}
	return 0;
}