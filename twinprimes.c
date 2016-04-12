#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef unsigned long bignum;

#define MAX_SIZE 20000000

int main(){
	bignum n;
	char * primes = malloc(sizeof(unsigned char) * (MAX_SIZE + 2));
	bignum * p = malloc(sizeof(bignum) * (MAX_SIZE + 2));

	bignum start, temp;
	bignum a,b;

	for(n=0;n<=MAX_SIZE;n++)
		*(primes + n) = 1;

	*(primes)=0;
	*(primes + 1)=0;

	start=2;


	while(start*start <= MAX_SIZE){
		temp = start+start;

		while(temp <= MAX_SIZE){
			*(primes + temp) = 0;
			temp = temp + start;
		}

		start++;

		while(*(primes+start) == 0) start++;
	}

	temp = 0;
	a = 0;

	for(n=0;n< MAX_SIZE;n++){
		if(primes[n] == 1){
			b = a+2;
			if(b == n){
				p[temp++] = a;
			}
			a = n;
		}
	}

	while(scanf("%d",&n) != EOF){
		printf("(%d, %d)\n",p[n],p[n]+2);
	}

return 0;
}