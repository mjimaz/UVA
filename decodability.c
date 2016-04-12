#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int set=1,i=0,j,k;
	char codes[150];

	while(scanf("%s", &temp) != EOF){
		if(strncmp(temp,"9", 100) == 0){
			for(j=0;j<i-1;j++){
				for(k=j;k<i;k++){
				}
			}
			printf("Set %d is immediately decodable\n",set);
			printf("Set %d is not immediately decodable\n",set);
			set++;
			i=0;
		}else{
			codes[i++] = temp;
		}

	}
	return 0;
}