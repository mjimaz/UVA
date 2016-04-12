#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char word[100050];
	int i, j,x, sq ;
	double length;
	int cases;

	scanf("%d",&cases);
	scanf("\r");
	while(cases--){
		gets(word);
		length = strlen(word);
		sq = sqrt(length);

		if(sq*sq != length){
			printf("INVALID\n");
		}else{
			x = (int)sq;
			for(i=0;i<x;i++)
				for(j=i;j<length;j+=x){
					printf("%c",word[j]);
				}
			printf("\n");
		}
	}
	return 0 ;
}