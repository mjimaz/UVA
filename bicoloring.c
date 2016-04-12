#include <stdio.h>

int main(){
	int n,l, i;
	int nodes[200];
	int BICOLORABLE;
	int e1, e2;
	int n1, n2;

	while(1){
		scanf("%d", &n);

		if(n == 0)
			break;

		BICOLORABLE=1;

		for(i = 0;i<n;i++)
			nodes[i] = 0;

		scanf("%d", &l);

		while(l>0){
			scanf("%d %d", &e1, &e2);
			if(BICOLORABLE == 1){
				n1 = nodes[e1];
				n2 = nodes[e2];
				if(n1 == 0 && n2 == 0){
					printf("%d %d both are zero\n", n1, n2);
					nodes[e1] = -1;
					nodes[e2] = 1;
				}else if(n1 == n2){
					BICOLORABLE = 0;
					printf("%d %d both are equal\n", n1, n2);
				}else if(n1 == 0){
					nodes[e1] = n2*-1;
					printf("%d %d colour them n1\n", n1, n2);
				}else if(n2 == 0){
					nodes[e2] = n1*-1;
					printf("%d %d colour them n2\n", n1, n2);
				}
				}
			l--;
		}

		if(BICOLORABLE == 1)
			printf("BICOLORABLE.\n");
		else
			printf("NOT BICOLORABLE.\n");



	}
	return 0;
}