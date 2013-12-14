#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[2001];
	int temp, i=0, j, start, count;
	do{
		scanf("%d", &temp);
		num[i++] = temp;
	} while(temp >= 1);

	for(j=0; j<i-1;j++){
		start = 1;
		count = 0;
		while(start < num[j]){
			start = start *2;
			count++;
		}
		printf("Case %d: %d\n", j+1, count);
	}
	return 0;
}