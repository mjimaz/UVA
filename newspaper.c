#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,k,m,i,j,p,o;
	char paidchar[105];
	int price[105];
	char temp[10002];
	int match;

	while(1){
		scanf("%d",&n);
		if(n == 0)
			break;

		scanf("%d",&k);

		for(i=0;i<k;i++)
			scanf("%c %d",&paidchar[i], &price[i]);

		scanf("%d",&m);

		for(i=0;i<m;i++){
			scanf("%s",&temp);
		}


	}

	return 0;
}