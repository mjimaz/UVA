#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100000

int main(){
	char * word = malloc(sizeof(char) * (MAX_SIZE +1));
	//char * copy = malloc(sizeof(char) * (MAX_SIZE +1));
	char * p = malloc(sizeof(char) * (MAX_SIZE +1));

	int length,i;
	int n;

	while(scanf("%s",word) != EOF){
		length = strlen(word);

		//printf("length == %d\n",length);


		if(length == 1){
			//printf("single word %s",&word);
		}else{

			i=0;
			n = length - 1;

			//printf("before while loop\n");
			while(1){

				if(word[i] == word[n]){
					//printf("word[%d] =%c && word[%d]=%c\n",i,word[i],n,word[n]);
					p[n]=1;
					p[i]=1;
					i++;
					n--;
				}else{
					printf("not equal word[%d] =%c && word[%d]=%c\n",i,word[i],n,word[n]);
					if(i == n-1){
						printf("i=%d n=%d\n",i,n);
						p[n]=1;
						p[i]=0;
						break;
					}else if(i > n){
						printf("i=%d n=%d\n",i,n);
						break;
					}
					p[i]=0;
					i++;

					while(n < (length -1)){
						p[n]=0;
						n++;
					}
					if(word[i-1] == word[n]){
						p[n]=1;
						n--;
					}
				}

			}
		}
		n = length - 1;

		for(i=0;i<=n;i++)
			printf("%d ",p[i]);
		printf("\n");

		printf("%s",word);


		for(i=n;i>=0;i--){
			if(p[i] == 0)
				break;
				//printf("%c",word[i]);
		}
		for(n=i;n>=0;n--)
			printf("%c",word[n]);

		printf("\n");
	}
	return 0;
}