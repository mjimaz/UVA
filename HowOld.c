#include <stdio.h>
#include <stdlib.h>

int main(){
	int testcases,cases=1;
	int cd,cm,cy,bd,bm,by;
	int age;

	scanf("%d",&testcases);

	while(testcases-- >0){
		scanf("%2d/%2d/%4d",&cd,&cm,&cy);
		scanf("%2d/%2d/%4d",&bd,&bm,&by);

    	age = cy-by;

		printf("Case #%d: ",cases++);

    	if(age < 0)
    		printf("Invalid birth date\n");
    	else if(age == 0){
			if(cm < bm)
				printf("Invalid birth date\n");
			else if(cm > bm)
				printf("0\n");
			else{
				if(cd >= bd)
					printf("0\n");
				else
					printf("Invalid birth date\n");
			}
		}else{
			if(cm<bm)
				age--;
			else if(cm == bm)
				if(cd < bd)
					age--;

			if(age > 130)
				printf("Check birth date\n");
			else
				printf("%d\n",age);
		}


	}
    return 0;
}