#include <stdio.h>
#include <stdlib.h>

int main(){
	int b,i, cases=1,temp;
	int m[12],p[12];

	while(scanf("%d",&b)&& b >= 0 ){

	for(i=0;i<12;i++)
		scanf("%d",&m[i]);

	printf("Case %d:\n",cases++);
	temp = b;
	for(i=0;i<12;i++){

		scanf("%d",&p[i]);
		temp = temp - p[i];

		if(temp < 0 ){
			printf("No problem. :(\n");
			temp = temp + p[i];
		}else
			printf("No problem! :D\n");
		temp = temp + m[i];
	}

	}
	return 0;
}