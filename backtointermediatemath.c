#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){
	char s[10];
	int t, cases = 1;
	int d, v, u;
	double fastPath, fastTime;

	scanf("%d", &t);
	while(1){
		if(t == 0)
			break;

		scanf("%d %d %d", &d, &v, &u);

		if(u == 0 || v >= u || v == 0)
			printf("Case %d: can't determine\n", cases);
		else{
			printf("Case %d: ", cases);
			fastPath = 1.0*d/u;
			fastTime = d/sqrt(u*u - v*v);
			printf("%.3f\n",(fastTime-fastPath));
		}
		cases++;
		t--;
	}
	return 0;
}