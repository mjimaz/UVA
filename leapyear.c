#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char year[100001];
	int r4, r55, r15, r100, r400;
	int length,i;
	int count = 0;

	while(scanf("%s",&year) != EOF){

		if(count > 0)
			printf("\n");
		count++;

		length = strlen(year);
		r4=0;
		r55=0;
		r15=0;
		r100=0;
		r400=0;

		for (i=0;i<length;i++){
			r4=(r4*10+year[i]-'0')%4;
			r55=(r55*10+year[i]-'0')%55;
			r15=(r15*10+year[i]-'0')%15;
			r100=(r100*10+year[i]-'0')%100;
            r400=(r400*10+year[i]-'0')%400;
		}
		if((r400 ==0) || ((r4==0)&&(r100!=0))){
			printf("This is leap year.\n");

			if(r15 == 0)
				printf("This is huluculu festival year.\n");
			if(r55 == 0)
				printf("This is bulukulu festival year.\n");
		}
		else if (r15 == 0)
			printf("This is huluculu festival year.\n");
		else
			printf("This is an ordinary year.\n");

	}
	return 0;
}