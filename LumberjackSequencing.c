#include <stdio.h>

int main(){
	int testcases,i;
	int num[10];

	scanf("%d",&testcases);

	printf("Lumberjacks:\n");

	while(1){
		if(testcases == 0)
			break;

		for(i=0;i<10;i++)
			scanf("%d", &num[i]);

		if(num[0]<num[1]){
			i=1;
			while(num[i]<num[i+1]){
				i++;
				if(i == 9)
					break;
			}
		}else{
			i=1;
			while(num[i]>num[i+1]){
				i++;
				if(i == 9)
					break;
			}
		}

		if(i == 9)
			printf("Ordered\n");
		else
			printf("Unordered\n");
		testcases--;
	}
	return 0;
}