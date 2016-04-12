#include <stdio.h>
#include <string.h>

int main(){
	int testcases, cases=1, i;
	float m, avg;
	int len, comma;
	char str[1000];

	scanf("%d",&testcases);


	while(1){
		if(testcases == 0)
			break;

		avg=0;

		for(i=0;i<12;i++){
			scanf("%f",&m);

			avg +=m;


		}
		avg = avg/12;
		sprintf(str, "%.2f", avg);
		len = strlen(str);

		printf("%d $%f %s\t", cases,avg,str);

		comma = len-3;

		for(i=0;i<len-3;i++){

			printf("%c",str[i]);
			printf("cpmma %d\n",comma);
			if(comma%4 == 0)
				printf(",");
			comma--;
		}

		printf("%c%c%c\n",str[i],str[i+1],str[i+2]);
		cases++;
		testcases--;
	}
	return 0;
}