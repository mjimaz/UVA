#include <stdio.h>
#include <string.h>

int main(){
	int cases;
	int amp, freq;
	int i, j;

	scanf("%d",&cases);

	while(cases){
		scanf("%d\n%d",&amp,&freq);

		while(freq){

			for(i=1;i<=amp;i++){
				for(j=1;j<=i;j++)
					printf("%d",i);
				printf("\n");
			}
			for(i=amp-1;i>=1;i--){
				for(j=1;j<=i;j++)
					printf("%d",i);

				printf("\n");
			}
			freq--;
			if(freq>0)
				printf("\n");
		}
		cases--;
		if(cases > 0)
			printf("\n");
	}
	return 0 ;
}