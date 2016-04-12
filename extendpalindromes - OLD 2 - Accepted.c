#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100000

int main(){
	char * word = malloc(sizeof(char) * (MAX_SIZE +1));
	char * p = malloc(sizeof(char) * (MAX_SIZE +1));

	int length,i=0;
	int n, start;

	while(scanf("%s",word) != EOF){
		length = strlen(word);
		p[0]=0;
		if(length > 1){
			start=0;
			i=0;
			n = length - 1;
			while(i <= n){
				if( i == n){
					p[i]=1;
					break;
				}else if(i>n)
					break;

				if(word[i] == word[n]){
					p[i]=1;
					p[n]=1;
					i++;
					n--;
				}else{
					p[i]=0;
					p[n]=0;
					if(p[start] == 1){

						i = start+1;

						while(1){
							if(word[start] != word[i]){
								p[i]=0;
								if(i < n)
									i++;
								else{
									p[start]=0;
									start = i;
									n = length - 1;
									p[n]=0;
									break;
								}
							}else{
								p[start]=0;
								start = i;
								n = length - 1;
								p[n]=0;
								break;
							}
						}
					}else{
						start++;
						i = start;
						n = length - 1;
					}

				}
			}

		}
		n = length - 1;

		if(length != 1)
		printf("%s",word);

		for(i=n;i>=0;i--){
			if(p[i] == 0)
				break;
		}

		for(n=i;n>=0;n--)
			printf("%c",word[n]);

		printf("\n");
	}
	return 0;
}