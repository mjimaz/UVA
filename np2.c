#include <stdio.h>
#include <stdlib.h>



#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

int np(int num){
	if(num % 2 == 1)
		return 3*num + 1;
	else
		return num/2;
}

int main(){
	int temp, i, j, k, result, count;
	int from, to, max, num;
	int length[1000000]={0};

	while(scanf("%d %d", &i, &j) != EOF){
		if(i > j){
			from = j;
			to = i;
		}else{
			from = i;
			to = j;
		}
		max = 0;
		for(k=from; k<=to;k++){
			count=0;
			num = k;
			temp = length[k];
			if(temp == 0){
				while(num >= 1){
					if(num == 1){
						length[num] = 1;
						break;
					}else if(num % 2 == 1)
						num = 3*num + 1;
					else
						num = num/2;
					count++;
					temp = length[num];
					if(temp !=	0 ){
						length[k] = count + temp;
					}
				}
				length[k] = count;
			}
			max = max(max, length[k]);
		}

		printf ("%d %d %d\n", i, j, max);

	}
	return 0;
}