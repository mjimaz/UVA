#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B, C;

	while(scanf("%d %d %d",&A, &B, &C) == 3){
		if(A == B)
			if(A == C)
				printf("*\n");
			else
				printf("C\n");
		else
			if(A == C)
				printf("B\n");
			else
				printf("A\n");
	}
return 0;
}