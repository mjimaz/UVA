#include <stdio.h>
#include <string.h>

int main(){
	int cases, i=1;
	double c1, c2, f1, f2, increase;

	scanf("%d",&cases);

	while(cases){

		scanf("%lf %lf",&c1,&increase);

		f1 = 9.0*c1/5.0+32.0;
		//printf("f1 = %f, increase %f\n",f1, increase);
		f2 = f1+increase;
		//printf("f2 = %f\n",f2);

		c2 = (f2-32.0)*5.0/9.0;

		printf("Case %d: %.2f\n",i,c2);
		i++;
		cases--;
	}
	return 0;
}