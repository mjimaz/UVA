#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_SIZE 10000
typedef unsigned long bignum;

int main(){
	char A[MAX_SIZE + 2],num[MAX_SIZE + 2],m[MAX_SIZE + 2],count[MAX_SIZE + 2];
	int length,i;

	while(1){
		scanf("%s",&A);
		if(strcmp(A,"0") == 0)
			break;
		else{
			length = strlen(A);
			m=0;
			for(i=0;i<length;i++)
				m = m*10 + (A[i] - '0');

			num = 0;
			count = 0;
			for(i=1;i<=m;i++){
				count++;
				num = num + (2*i + 1);
				if(num > m)
					break;
			}

			sprintf(A, "%d", count);
			length = strlen(A);

			printf("%c",A[0]);
			for(i=0;i<length-1;i++)
				printf("0");

			printf("\n");


		}
	}

	return 0;
}