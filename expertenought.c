#include <stdio.h>
#include <stdlib.h>

int main(){
	int testCases,i,j;
	char cars[10000][25];
	int low[10000], high[10000];
	int match;
	int d1,d2;
	int price;
	int m;
	int cases=0;

	scanf("%d",&testCases);
	getchar ();
	while(testCases-- > 0){
		if(cases>0)
			printf("\n");

		scanf("%d",&d1);
		for(i=0;i<d1;i++){
			scanf("%s %d %d",&cars[i],&low[i], &high[i]);
		}
		scanf("%d",&d2);
		for(i=0;i<d2;i++){
			match=0;
			scanf("%d",&price);
			for(j=0;j<d1;j++){
				if(price < low[j] || price > high[j]){

				}else{
										if(match == 0){
											match=1;
											m=j;
										}else{
											match=2;
											j=d1;
					}
				}
			}
			if(match==1)
				printf("%s\n",cars[m]);
			else
				printf("UNDETERMINED\n");
		}
		cases++;

	}
	return 0;
}