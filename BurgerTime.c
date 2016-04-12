#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 2000005

int main(){
	int length;
	char* highway = (char*) malloc(sizeof(char) * MAX);
	int i, j, d, n, distance,temp;

	while(1){
		scanf("%d", &length);
		if(length == 0)
			break;
		getchar();
		gets(highway);

		distance=length;
		temp = length;
		d = -1;
		n = -1;

		for(i=0;i<length;i++){
			if(highway[i] == 'Z'){
				distance=0;
				break;
			}else if(highway[i] == 'D'){
				d=i;
			}else if(highway[i] == 'R'){
				n=i;
			}

			if(d != -1 && n != -1){
				if(d<n)
					temp = n-d;
				else
					temp = d-n;
			}
			if(temp < distance)
				distance = temp;
		}


		printf("%d\n",distance);
	}
	return 0;
}