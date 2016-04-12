#include <stdio.h>

int main(){
	int i;
	int div3=0, div5=0;

	for(i=1;i<=100;i++){
		div3++;
		div5++;

		if(div3 == 3 && div5 == 5){
			printf("CracklePop\n");
			div3 = 0;
			div5 = 0;
		}else if(div3 == 3){
			printf("Crackle\n");
			div3 = 0;
		}else if(div5 == 5){
			printf("Pop\n");
			div5 = 0;
		}else
			printf("%d\n",i);
	}
	return 0;
}