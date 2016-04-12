#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1001

int main(){
	int length,i, j, s;
	int testcases;
	int L[MAX][MAX];
	int p[MAX];
	char word[MAX];

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		scanf("%s",&word);

		length = strlen(word);

		for(i = length -1 ; i>= 0;i--){
			for(j=i;j<length;j++){
				if(word[i] == word[j] && (j-i<2 || (L[i+1][j-1] == 1)))
					L[i][j] = 1;
				else
					L[i][j] = 0;
			}
		}

		for(i=0;i<length;i++){
			s = length;
			if(L[0][i] == 1)
				p[i]=0;
			else{
				for(j=0;j<i;j++){
					if(L[j+1][i] && s>(p[j]+1))
						s = p[j]+1;
				}
				p[i] = s;
			}
		}
		printf("%d\n",p[length-1]+1);
		testcases--;
	}
	return 0;
}