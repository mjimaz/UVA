#include <stdio.h>
#include <stdlib.h>

int main(){
	int r;

	while(scanf("%d",&r) && r != 0){
		if (r < 101)
			printf("f91(%d) = 91\n",r);
		else
			printf("f91(%d) = %d\n",r,r-10);
	}
return 0;
}