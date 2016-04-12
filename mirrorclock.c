#include <stdio.h>
#include <stdlib.h>

int main(){
	int testCases,i;
	char mirrorclock[10];
	int c1, c2, c3, c4, h, m;
	char *hours[14] = {"00","11","10","09","08","07","06","05","04","03","02","01","12","11"};
	char *minutes[60] = {"00","59","58","57","56","55","54","53","52","51","50","49","48","47","46","45","44","43","42","41","40","39","38","37","36","35","34","33","32","31","30","29","28","27","26","25","24","23","22","21","20","19","18","17","16","15","14","13","12","11","10","09","08","07","06","05","04","03","02","01"};

	scanf("%d",&testCases);
	getchar ();
	while(testCases-- > 0){
		gets(mirrorclock);
		c1 = mirrorclock[0] - '0';
		c2 = mirrorclock[1] - '0';
		c3 = mirrorclock[3] - '0';
		c4 = mirrorclock[4] - '0';

		h = c1*10 + c2;
		m = c3*10 + c4;

		if(m == 0)
			printf("%s:%s\n",hours[h],minutes[m]);
		else{
			printf("%s:%s\n",hours[h+1],minutes[m]);
		}

	}
	return 0;
}