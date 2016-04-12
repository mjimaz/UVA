#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int n,m,r,c,i,j,go=1;
	char paint[100][100],canvas[100][100];
	int startrow, endrow, startcol, endcol,change,count;


	while(scanf("%d %d %d %d",&n,&m,&r,&c) && (n || m || r ||c)){


	for(i=0;i<n;i++)
		scanf("%s",&paint[i]);

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			canvas[i][j] = '0';
	printf("after initializing canvas\n");

	startrow=0;
	endrow=r;
	startcol=0;
	endcol=c;
	count=0;
	//while(go==1){
	for(i=startrow;i<endrow;i++){
		printf("ROW start %d end %d\n",startrow,endrow);
		change=0;
			for(j=startcol;j<endcol;j++){
				printf("COL start %d end %d\n",startcol,endcol);
				printf("before: c:%c p:%c\n",canvas[i][j], paint[i][j]);
				if((i == startrow && j==startcol) && (canvas[i][j] != paint[i][j])){
					printf("change: c:%c p:%c\n",canvas[i][j], paint[i][j]);
					change = 1;
					count++;
				}
				if(change == 1){
					printf("before %c",canvas[i][j]);
					canvas[i][j] = ~canvas[i][j];
					printf(" After %c\n",canvas[i][j]);
				}else{
					j=endcol;
					i=endrow;
				}
			}
		}
	//}
	printf("%d\n",count);
	}

	return 0;
}