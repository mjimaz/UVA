#include <stdio.h>

#define MAX 100000

int main(){
	long i,j;
	char ch;
    long n, max, sum;
    long num[MAX];
    long count = 0;

	while(scanf("%ld%c",&n,&ch) != EOF){
		num[count] = n;
		count++;

		if(ch == '\n'){
			sum = num[0];
			max = num[0];
			if(max < 0)
				max = 0;
			for(i = 1; i< count;i++){
				if(sum < 0){
					sum = num[i];
				}else{
					sum += num[i];
				}
				if(sum > max)
					max = sum;
			}
			printf("%ld\n",max);

			count = 0;
		}

	}
return 0;
}