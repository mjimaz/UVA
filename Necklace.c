#include <stdio.h>
#include <math.h>

int main(){
	int vt, vo, n, z;
	double max_l, max_n;
	double d, length, temp;

	while(1){
		scanf("%d %d",&vt, &vo);

		if(vt == 0 && vo == 0)
			break;

		max_l =-1.0;
		max_n =0.0;
		z = 0;

		if(vt <= vo)
			printf("0\n");
		else{
			n = vt/vo;

			while(n>=1){
				temp = (double)vt/(double)n;
				d = 0.3*sqrt(temp-(double)vo);
				length = d*(double)n;
				if(fabs(length-max_l)<1e-12){
					z = 1;
					break;
				}
				else if(length > max_l){
					max_l = length;
					max_n = n;
				}
				n--;
			}

			if(z == 1){
				printf("0\n");
			}else{
				printf("%.0f\n",max_n);
			}
		}
	}
	return 0;
}