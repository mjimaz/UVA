#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char input[100000];
	int i, k, length;
	char temp[10000];
	long num1, num2;
	int operation, position;

	while(gets(input)){
		length = strlen(input);

		position = 1;
		num1 = 0;
		num2 = 0;
//printf("input %s\n", input);
		for(i=length-1;i>=0;i--){
			if(input[i] == ' ')
				break;
			num2 += (input[i] - '0')*position;
			position *=10;
			//printf("input[%d] = %c\n",i,input[i]);
		}
		//printf("num2 %d\n",num2);

		while(input[i] == ' ')
			i--;
		if(input[i--] == '/')
			operation = 0;
		else
			operation = 1;

		while(input[i] == ' ')
			i--;

		position = 1;
		for(k=i;k>=0;k--){
			num1 += (input[k] - '0' )*position;
			position *=10;
		}

	//printf("num1 = %ld num2 = %ld\n", num1, num2);

		if(operation == 0)
			printf("%ld\n",num1/num2);
		else
			printf("%ld\n",num1%num2);

	}
	return 0;
}