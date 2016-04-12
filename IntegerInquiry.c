#include <stdio.h>
#include <string.h>

int main(){
	char num[110], sum[110];
	int length, i, carry, result, rem, sumlength;

	gets(sum);
	sumlength = strlen(sum);
	while(1){
		gets(num);

		if(strcmp(num, "0") == 0)
			break;

		length = strlen(num);
		carry = 0;


		if(sumlength == length){
			for(i=length-1;i>=0;i--){
				result = sum[i]-'0' + num[i]-'0' + carry;
				rem = result%10;
				sum[i] = rem+'0';
				carry = result/10;
			}
			if(carry !=0)
				sum[i] = carry+'0';
		}else if(sumlength > length){
			for(i=1;i<=length;i++){
				result = sum[sumlength-i]-'0' + num[length-i]-'0' + carry;
				rem = result%10;
				sum[sumlength-i] = rem+'0';
				carry = result/10;
			}
			while(carry != 0 && i<=sumlength){
				result = sum[sumlength-i]-'0' + carry;
				rem = result%10;
				sum[sumlength-i] = rem+'0';
				carry = result/10;
				i++;
			}
		}else{
		}



		sumlength = strlen(sum);

	}
	printf("%s", sum);
	return 0;
}