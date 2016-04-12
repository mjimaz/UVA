#include <stdio.h>
#include <stdlib.h>

int main(){
	int k,m,i,j,p,o;
	int courses[105];
	int r[105],c[105];
	int list[105][105];
	int match;

	while(1){
		scanf("%d",&k);
		if(k == 0)
			break;

		scanf("%d",&m);

		for(i=0;i<k;i++)
			scanf("%d",&courses[i]);

		for(i=0;i<m;i++){
			scanf("%d %d",&r[i],&c[i]);
			for(j=0;j<r[i];j++)
				scanf("%d",&list[i][j]);
		}

		for(i=0;i<m;i++){
			match=0;
			for(p=0;p<r[i];p++){
				for(j=0;j<k;j++){
					if(courses[j] == list[i][p])
						match++;
					if(match == c[i])
						break;
				}
				if(match == c[i])
					break;
			}
			if(match != c[i])
				break;
		}

		if(i == m && match == c[i-1])
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}