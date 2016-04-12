#include <stdio.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif


int length[1000000]={0};

int np(int num){
	if(num % 2 == 1)
		return 3*num + 1;
	else
		return num/2;
}

int cl(int num){

	int temp = length[num];

	if(temp != 0)
		return temp;
	else{
		if(num == 1)
			return 1;
		length[num] = 1+ cl(np(num));

		return length[num];
	}
}
int main(){
	int temp, i, j, k, result;
	int from, to, max;

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
			max = max(max, cl(k));
		}

		printf ("%d %d %d\n", i, j, max);

	}
	return 0;
}