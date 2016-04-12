#include <stdio.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

#ifndef min
	#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif

int main(){
	int high, low, current;
	char verdict[50];

	high = 11;
	low = 0;

	while(1){
		scanf("%d",&current);
		if(current == 0)
			break;

		gets(verdict);
		gets(verdict);

		if(verdict[4] == 'h'){
			high = min(current, high);
		}else if(verdict[4] == 'l'){
			low = max(current, low);
		}else{
			if(current <= low || current >= high)
				printf("Stan is dishonest\n");
			else
				printf("Stan may be honest\n");
			high = 11;
			low = 0;
		}
	}
	return 0;
}