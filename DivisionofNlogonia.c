#include <stdio.h>

int main(){
	int k;
	int n, m;
	int x,y;
	int qx, qy;

	while(1){
		scanf("%d", &k);

		if(k == 0)
			break;

		scanf("%d %d", &n, &m);

		while(k--){
			scanf("%d %d", &x, &y);

			qx = x-n;
			qy = y-m;

			if(qx == 0 || qy == 0)
				printf("divisa\n");
			else{
				if(qx > 0){
					if(qy>0)
						printf("NE\n");
					else
						printf("SE\n");
				}else{
					if(qy>0)
						printf("NO\n");
					else
						printf("SO\n");
				}
			}
		}
	}
	return 0;
}