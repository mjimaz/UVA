#include <stdio.h>
#include <stdlib.h>

int main(){
	int testcases,cases=1;
	int cd,cm,cy1,cy2,bd,bm,by1,by2;
	float leap;
	int zc,zb;
	int age,y1,y2;


	scanf("%d",&testcases);

	while(testcases-- >0){
		scanf("%2d/%2d/%2d%2d",&cd,&cm,&cy1,&cy2);
		scanf("%2d/%2d/%2d%d",&bd,&bm,&by1,&by2);

		zc = 365*(100*(cy1-16)+cy2) + 24*cy1 + (cy1/4) + (cy2/4) + 30*cm + ((3*cm-1)/5) + cd - 419;
		zb = 365*(100*(by1-16)+by2) + 24*by1 + (by1/4) + (by2/4) + 30*bm + ((3*bm-1)/5) + bd - 419;

    	age = (zc-zb)/365.2425;
    	//age = leap;
		printf("Case #%d: ",cases++);

		//printf("age - %f\n",leap);

    	if(age > 130){
			printf("Check birth date\n");
		}else if(age == 130){
			if(cd >= bd || cm > bm)
				printf("Check birth date\n");
			else
				printf("%d\n",age);
		}else if(age == 0){
			y1 = cy1*100+cy2;
			y2 = by1*100+by2;
			//leap = (y%400 ==0) || ((y%4==0)&&(y%100!=0));
			if(y1 < y2)
				printf("Invalid birth date\n");
			else if(cm < bm && y1 == y2)
				printf("Invalid birth date\n");
			else if(cm == bm && cd < bd)
				if(cm == 2 && cd >= 28 && bd >= 28)
					printf("%d",age);
				else
					printf("Invalid birth date\n");
			else
				printf("%d\n",age);

		}else
			printf("%d\n",age);
	}
    return 0;
}