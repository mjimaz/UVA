#include <stdio.h>
#include <string.h>

int main(){
	int position;
	int length;
	char word[3000];
	char stack[3000];
	int location[3000];
	int sp, balance;
	int i;

	while(scanf("%s",&word) != EOF){
		sp = 0;
		length = strlen(word);

		printf("word %s length %d\n",word, length);

		for(i=0;i<length;i++){
			if(word[i] == '('){
				location[sp]=i;
				stack[sp++] = '(';
				balance = 0;
			}else if(word[i] == ')'){
				if(stack[--sp] != '('){
					position = i;
					balance = 0;
					break;
				}else
					balance = 1;
			}else if(word[i] == '['){
				location[sp]=i;
				stack[sp++] = '[';
				balance = 0;
			}else if(word[i] == ']'){
				if(stack[--sp] != '['){
					balance = 0;
					break;
				}else
					balance = 1;
			}else if(word[i] == '{'){
				location[sp]=i;
				stack[sp++] = '{';
				balance = 0;
			}else if(word[i] == '}'){
				if(stack[--sp] != '{'){
					balance = 0;
					break;
				}else
					balance = 1;
			}else if(word[i] == '<'){
				location[sp]=i;
				stack[sp++] = '<';
				balance = 0;
			}else if(word[i] == '>'){
				if(stack[--sp] != '<'){
					balance = 0;
					break;
				}else
					balance = 1;
			}else if(word[i] == '*'){
				if(word[i-1] == '('){
					location[sp]=i;
					stack[sp++] = '*';
					balance = 0;
				}else if (word[i+1] == ')'){
					if(stack[sp-1] == '*' && stack[sp-2] == '('){
						sp = sp -2 ;
						balance = 1;
						i++;
					}else{
						balance = 0;
						break;
					}
				}
			}else if(word[i] == '>'){
				if(stack[--sp] != '<'){
					position = i;
					balance = 0;
					break;
				}else
					balance = 1;
			}
		}
		if(balance)
			printf("YES\n");
		else
			printf("NO %d\n",position+1);

	}

	return 0 ;
}