#include <stdio.h>

int main(){
	int v,t;
	int temp;
	while(scanf("%d %d", &v, &t) == 2){
		if(v == 0 || t == 0)
			printf("0\n");
		else{
			temp = v*t*2;
			printf("%d\n",temp);
		}
	}
	return 0;
}