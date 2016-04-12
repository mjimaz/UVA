#include <stdio.h>
#include <math.h>


int main(){
	long num;
	int a,n,i;
	double sum, da, dn;



	while(scanf("%d %d",&n,&a) == 2){
		da = (double)a;
		dn = (double)n;

		sum =  pow(da, dn+1);
		sum = sum * (1/(da-1) - dn);
		sum = sum - (da/(da-1));
		sum = sum/(1-da);
		printf("%.0lf\n",sum);
	}
	return 0;
}