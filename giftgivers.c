#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int d,i,j,k,l;
	char c;
	char names[10][20];
	char tempnames[10][20];
	char currentname[20];
	int money[10];
	int num,m;
	int div;
	int cases=0;
	int index;

	while(scanf("%d",&d) != EOF){
		if(cases++ > 0)
			printf("\n");
		for(i=0;i<d;i++)
			scanf("%s%c",&names[i],&c);

		for(i=0;i<d;i++)
			money[i]=0;

		for(i=0;i<d;i++){
			scanf("%s %d %d",&currentname,&m,&num);

			if(num != 0){
			for(j=0;j<d;j++)
				if(strcmp(currentname,names[j]) == 0){
					index=j;
					j=d;
				}

			div = m/num;

			money[index] = money[index] - (div*num);

			for(k=0;k<num;k++)
				scanf("%s%c",&tempnames[k],&c);


			for(k=0;k<num;k++){
				for(l=0;l<d;l++)
					if(strcmp(names[l],tempnames[k]) == 0){
						money[l] = money[l] + div;
						l=d;
					}
			}

		}

		}

		for(i=0;i<d;i++)
			printf("%s %d\n",names[i],money[i]);
	}
return 0;
}