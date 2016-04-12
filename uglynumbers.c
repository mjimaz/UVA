#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	unsigned long item = 1;
	unsigned long num = 1;
	unsigned long div;
	int rem;
	int ugly;
	//unsigned long a= 4294967296UL;
	printf("item %lu: %lu\n",item, num);
	item++;
	num++;
	while (item <=1500){
		ugly = 0;
		if(num%2==0 || num%3==0 || num%5==0){
			ugly = 1;
			if(num%4 == 0){
				ugly=0;
			}else{
				for(div = num; div > 5; div--){
					rem = num%div;
					if(rem == 0){
						ugly = 0;
						break;
					}
				}
			}
		}

		if(ugly == 1){
			printf("item %lu: %lu\n",item, num);
			item++;
		}



		num++;
	}
	return 0;
}