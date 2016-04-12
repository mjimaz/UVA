#include <stdio.h>
#include <stdlib.h>

int main(){
	int testCases;
	char trains[150];
	int i;
	int mcount, fcount;

	scanf("%d",&testCases);
	getchar ();
	while(gets(trains) && testCases-- > 0){
		mcount = 0;
		fcount = 0;
		for(i=0;trains[i];i++){
			if(trains[i] == 'M')
				mcount++;
			else if(trains[i] == 'F')
				fcount++;
		}
		if(mcount != fcount || mcount == 1 || fcount == 1)
			printf("NO LOOP\n");
		else
			printf("LOOP\n");

	}
return 0;
}