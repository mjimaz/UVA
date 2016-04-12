#include <stdio.h>


int main(){
	int testcases;
	int cases=0;
	int high_jump, low_jump;
	int walls;
	int current, next;

	scanf("%d",&testcases);
	while(1){

		if(cases == testcases)
			break;

		high_jump=0;
		low_jump=0;

		scanf("%d",&walls);

		scanf("%d",&current);

		walls--;

		while(1){
			if(walls == 0)
				break;

			scanf("%d",&next);

			if(current > next)
				low_jump++;
			else if(current < next)
				high_jump++;

			current = next;
			walls--;
		}



		cases++;
		printf("Case %d: %d %d\n",cases,high_jump,low_jump);
	}
	return 0;
}