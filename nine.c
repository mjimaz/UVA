#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

int nine(char num[1000], int r){
	int length,i,sum=0, temp;
	char str[1000];

	length = strlen(num);

	if (length == 1){
		temp = num[0] - '0';
		if(temp == 9)
			return r;
		else
			return -1;
	}else{
		for(i=0;i<length;i++)
			sum += (num[i] - '0');
		if(sum ==9)
			return r;
		else if(sum%9 == 0){
			sprintf(str, "%d", sum);
			nine(str, r+1);
		}else
			return -1;
	}
}

int main(){
	char * N = malloc(sizeof(char) * (MAX_SIZE +1));
	int r;

	while(1){
		scanf("%s",N);
		r = strlen(N);

		if(r == 1){
			r = N[0]  - '0';
			if( r == 0)
				break;
		}

		r = nine(N,1);

		if(r == -1)
			printf("%s is not a multiple of 9.\n",N);
		else
			printf("%s is a multiple of 9 and has 9-degree %d.\n",N,r);

	}
	return 0;
}