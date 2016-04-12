#include <stdio.h>
#include <stdlib.h>

int main(){
	int H, U, D, F;
	int currentD;
	int day;

	while(1){
		scanf("%d %d %d %d",&H, &U, &D, &F);

		if(H == 0)
			break;

		currentD=0;
		day = 0;
		F = F*U;
		H = H*100;
		U = U*100;
		D = D*100;


		while(currentD <= H && currentD >= 0){
			currentD +=U;
			U = U -F;

			if(U<0)
				U = 0;
			if(currentD<=H)
				currentD-=D;

			day++;
		}

		if(currentD > H)
			printf("success on day %d\n", day);
		else
			printf("failure on day %d\n", day);

	}
	return 0;
}