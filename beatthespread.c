#include <stdio.h>


int main(){
	int testcases;
	int sum, diff;
	int num1, num2;

	scanf("%d",&testcases);

	while(1){

		if(testcases-- == 0)
			break;

		scanf("%d %d",&sum,&diff);

		if(sum < diff)
			printf("impossible\n");
		else{
			num1 = (sum - diff)%2;
			if(num1 != 0){
				printf("impossible\n");
				continue;
			}
			num1 = (sum - diff)/2;
			num2 = sum - num1;
			if(num1 > num2)
				printf("%d %d\n",num1,num2);
			else
				printf("%d %d\n",num2,num1);
		}
	}
	return 0;
}