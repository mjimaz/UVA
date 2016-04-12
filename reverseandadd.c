#include <stdio.h>
#include <string.h>

int main(){
	int testcases, length, add, carry, i, temp;
	char digits[15], result[15];
	int palindrome;

	scanf("%d",&testcases);
	getchar();

	while(1){
		if(testcases == 0)
			break;


		gets(digits);

		add=0;
		length = strlen(digits);
		palindrome=1;

		while(palindrome){
			carry = 0;

			for(i=0;i<length;i++){
				 temp = digits[i] - '0' + digits[length-1-i] - '0' + carry;
				 carry = temp/10;
				 result[i] = (temp%10)+'0';
			}
			if(carry != 0){
				result[i] = carry+'0';
				length++;
			}
			palindrome=0;
			result[length]='\0';

			for(i=0;i<length/2;i++){
				if(result[i] != result[length-i-1]){
					palindrome=1;
					break;
				}
			}
			add++;
			strcpy(digits, result);
		}
		printf("%d %s\n",add, result);

		testcases--;
	}
	return 0;
}