#include <stdio.h>
#include <string.h>

int main(){
	int testcases;
	int length;
	char word[130];
	char stack[130];
	int sp, balance;
	int i;

	scanf("%d",&testcases);

	gets(word);

	while(1){
		if(testcases == 0)
			break;
		sp = 0;

		balance = 1;

		gets(word);

		length = strlen(word);

		for(i=0;i<length;i++){
			if(word[i] == '('){
				stack[sp++] = '(';
				balance = 0;
			}else if(word[i] == ')'){
				if(stack[--sp] != '('){
					balance = 0;
					break;
				}else
					balance = 1;
			}else if(word[i] == '['){
				stack[sp++] = '[';
				balance = 0;
			}else{
				if(stack[--sp] != '['){
					balance = 0;
					break;
				}else
					balance = 1;
			}
		}
		if(balance)
			printf("Yes\n");
		else
			printf("No\n");
		testcases--;
	}

	return 0 ;
}