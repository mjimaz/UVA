#include <stdio.h>
#include <string.h>

int main(){
	char sentences[110][110];
	int length[100];
	int i, max=0, n=0, j;

	/* for( i=0;i<110;i++)
	        for( j=0;j<110;j++)
            sentences[i][j]=' ';*/

	while(gets(sentences[i])){
		length[i] = strlen(sentences[i]);
		if(max < length[i])
			max = length[i];
		n++;
		i++;
	}

	printf("out of while max = %d n = %d\n",max,n);
	printf("%s\n",sentences[0]);
	printf("%s\n",sentences[1]);
	for(j=0;j<max;j++){
		for(i=n-1;i>=0;i--){
			if(length[i] > j){
				printf("%c",sentences[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}