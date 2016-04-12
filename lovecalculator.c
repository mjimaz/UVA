#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char name1[25],name2[25];
	int i,length1, length2;
	int sum1, sum2, temp, total1, total2;
	float percentage;

	while(gets(name1) != NULL){
		sum1=0;
		sum2=0;
		gets(name2);
		length1 = strlen(name1);
		length2 = strlen(name2);

		if(length1 == 0 && length2 == 0){
			printf("\n");
		}else{
		for(i=0;i<length1;i++){
			temp = (int)name1[i];
			if(temp>= 65 && temp <=90){
				sum1 = sum1 + (temp-64);
			}
			else if(temp>=97 && temp<= 122){
				sum1 = sum1 + (temp-96);
			}
		}

		for(i=0;i<length2;i++){
			temp = (int)name2[i];

			if(temp>= 65 && temp <=90)
				sum2 = sum2 + (temp-64);
			else if(temp>=97 && temp<= 122)
				sum2 = sum2 + (temp-96);
		}
		total1 = 0;
		total2 = 0;
		while(sum1 > 0 ){
		    temp = sum1 % 10;
		    total1 = total1 + temp ;
		    sum1 = sum1 / 10 ;
		    if(sum1 == 0 && total1>9){
				sum1 = total1;
	         	total1 = 0;
			}

    	}
    	while(sum2 > 0 ){
	         temp = sum2 % 10;
	         total2 = total2 + temp ;
	         sum2 = sum2 / 10 ;
	         if(sum2 == 0 && total2>9){
	         	sum2 = total2;
	         	total2 = 0;
			}
    	}
    	if(total1 == total2)
    		printf("100.00 %\n");
    	else if(total2 > total1){
			percentage = total1*100.00/total2;
			printf("%.2f %\n",percentage);
		}else{
			percentage = total2*100.00/total1;
			printf("%.2f %\n",percentage);
		}
		}
	}
	return 0;
}