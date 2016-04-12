#include <stdio.h>

int main(){
	int a, b, m1, m2;

	while(1){
		scanf("%d %d",&a, &b);

		if(a == -1 || b == -1)
			break;

		if(a < b){
			m1 = b-a;
			m2 = a - b + 100;
		}else{
			m1 = a - b;
			m2 = b - a + 100;
		}


		if(m1 > m2)
			printf("%d\n",m2);
		else
			printf("%d\n",m1);
	}
	return 0;
}