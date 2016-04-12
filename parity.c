#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ID_LEN 32

int main(){

	char **b;
	int variableNumberOfElements = 2147483650; //2147483647
	int i, j, counter, loop;
	char stemp = malloc(33 * sizeof(char*));

	b = malloc(variableNumberOfElements * sizeof(char*));
	for (i = 0; i < variableNumberOfElements; i++)
    	b[i] = malloc((ID_LEN+1) * sizeof(char));

    b[0] = "0";
    b[1] = "1";
	b[2] = "10";
	b[3]= "11";

	printf("the first string %s", b[0]);
	counter = 0;
	loop = 4;
	do{
		if(counter == loop){
			counter = 0;
			loop = loop *2;
		}

		do{
			memcpy(stemp, a[i], strlen(a[i]) -1);

			a[i] = "10" + a[i-(loop/2)];
			a[i+ (loop/2)] = "11" +
			counter++;
		}while(counter < loop);





	}while(i <=2147483647);



	return 0;
}