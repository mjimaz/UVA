#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int l,n,i,j;
	int irr,length,temp, temp2;
	char irregulars[25][25], irregularp[25][25], words[110][25];

	scanf("%d %d",&l,&n);

	for(i=0;i<l;i++)
		scanf("%s %s",&irregulars[i], &irregularp[i]);

	for(i=0;i<n;i++){
		scanf("%s",&words[i]);
		irr=0;
		for(j=0;j<l;j++){
			if(strcmp(words[i],irregulars[j]) == 0){
				irr=1;
			 	break;
		 	}
		}
		if(irr == 0){
			length = strlen(words[i]);
			temp = (int)words[i][length-1];

			if(temp == 121){
				temp = (int)words[i][length-2];
				if(temp == 97 ||temp == 101 ||temp == 105 ||temp == 111 ||temp == 117){
					printf("%ss\n",words[i]);
				}else{
					printf("%.*sies\n", length-1, words[i]);
				}
			}else {
				temp2 = (int)words[i][length-2];
			if(temp == 111 || temp == 115 || temp == 120 || (temp2 == 99 && temp == 104) || (temp2 == 115 && temp == 104)){
				printf("%ses\n",words[i]);
			}else
				printf("%ss\n",words[i]);
			}
		}else{
			printf("%s\n",irregularp[j]);
		}
	}
	return 0;
}