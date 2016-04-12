#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int testCases,l1,l2,i;
	char word1[25],word2[25];
	int temp1,temp2;
	int go;

	scanf("%d",&testCases);
	getchar ();
	while(testCases-- > 0){
		gets(word1);
		gets(word2);

		l1 = strlen(word1);
		l2 = strlen(word2);
		go=1;

		if( l1 == l2 && go == 1){
			for(i=0;i<l1;i++){
				temp1 = (int)word1[i];
				temp2 = (int)word2[i];
				if(temp1 == 97 ||temp1 == 101 ||temp1 == 105 ||temp1 == 111 ||temp1 == 117 ||temp1 == 121){
					if(temp2 == 97 ||temp2 == 101 ||temp2 == 105 ||temp2 == 111 ||temp2 == 117 ||temp2 == 121){

					}else{

						go=0;
					}
				}else if(temp1 != temp2){

					go=0;
				}
				if(go == 0)
					break;

			}
			if(go == 1)
				printf("Yes\n");
			else
				printf("No\n");
		}else{
			printf("No\n");
		}

	}
	return 0;
}