#include <stdio.h>
#include <string.h>

int main(){
	int s;
	int display[25][150];
	char n[10];
	int col,row;
	int x,y,i,j;
	int beginRow, midRow;
	int beginCol, endCol;
	int cd;
	int Lcol, Rcol;

	while(scanf("%d %s",&s, &n) != EOF){

		if(s == 0)
			break;

		col = s+2;
		row = 2*s+3;

		y=strlen(n);
		//beginRow = 0;
		//beginCol = 0;
		midRow = (row-1)/2;
		endCol = col*y + col;

		//printf("endCol = %d and y = %d and col = %d\n",endCol,y,col);

		for(i=0;i<row;i++){
			cd = 0;
			for(j=0;j<endCol;j++){
				if(j==0 || j== endCol-1)
					printf("*");
				else if(i == 0){
					if(n[cd]=='2' || n[cd]=='3' ||n[cd]=='5' ||n[cd]=='7' ||n[cd]=='8' ||n[cd]=='9' ||n[cd]=='0'){
						for(x=j;x<j+col-1;x++)
						printf("-");
						j=x;
					}
				}else if(i == midRow){
					if(n[cd]=='2' || n[cd]=='3' ||n[cd]=='5' ||n[cd]=='4' ||n[cd]=='8' ||n[cd]=='9' ||n[cd]=='6'){
						for(x=j;x<j+col-1;x++)
							printf("-");
						j=x;
					}

				}else if(i == row-1){
					if(n[cd]=='2' || n[cd]=='3' ||n[cd]=='5' ||n[cd]=='6' ||n[cd]=='8' ||n[cd]=='9' ||n[cd]=='0'){
						for(x=j;x<j+col-1;x++)
							printf("-");
						j=x;
					}
				}else if(i < midRow){ //upper half
					Lcol =j%(col+1);
					if(Lcol == 0){//left column
						Rcol = 1;
						if(n[cd]=='4'||n[cd]=='5' ||n[cd]=='6' ||n[cd]=='8'||n[cd]=='0')
							printf("|");
					}else if(Rcol== col-1)//right column
						if(n[cd]=='1'||n[cd]=='2'||n[cd]=='3'||n[cd]=='4' ||n[cd]=='7' ||n[cd]=='9' ||n[cd]=='8'||n[cd]=='0')
							printf("|");
					else{
						printf(" ");
					}
					Rcol++;
				}else{ //lower half
					Lcol =j%(col+1);
					if(Lcol == 0){
						Rcol = 1;
						if(n[cd]=='2' ||n[cd]=='6' ||n[cd]=='8'||n[cd]=='0')
							printf("|");
					}else if(Rcol == col-1){
						if(n[cd]=='1'||n[cd]=='3'||n[cd]=='4'||n[cd]=='5'||n[cd]=='7' ||n[cd]=='9' ||n[cd]=='8'||n[cd]=='0')
							printf("|");
					}else
						printf(" ");
					Rcol++;
				}
				cd++;
			}
			printf("\n");

		}


		printf("\n");

	}
	return 0;
}