#include <stdio.h>

int main(){
	int cases, i=1, j, n;
	int mile, juice, temp;

	scanf("%d",&cases);

	while(cases){
		scanf("%d",&n);

		mile=0;
		juice=0;

		for(j=0;j<n;j++){
			scanf("%d",&temp);

			mile += (temp/30)*10;
			mile+=10;


			juice += (temp/60)*15;
			juice+=15;
		}

	printf("Case %d: ", i);
	if(mile < juice)
		printf("Mile %d\n",mile);
	else if(mile > juice)
		printf("Juice %d\n",juice);
	else
		printf("Mile Juice %d\n",juice);
	cases--;
	i++;
	}
	return 0;
}