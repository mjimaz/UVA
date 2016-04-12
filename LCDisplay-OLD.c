#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]){
	int s;
	int display[25][150];
	char n[10];
	int col,row;
	int x,y,i,j;
	int beginRow, endRow;
	int beginCol, endCol;

	while(scanf("%d %s",&s, &n) != EOF){

		if(s == 0)
			break;

		col = s+2;
		row = 2*s+3;

		y=strlen(n);
		beginRow = 0;
		beginCol = 0;
		endRow = row;
		endCol = col;

		x = y*col + y;
		for(i=0;i<endRow;i++)
			for(j=0;j<x;j++)
				display[i][j] = 0;

		for(x=0;x<y;x++){

			if(n[x] == '0'){
				for(i=beginCol+1;i<endCol-1;i++){
					display[beginRow][i] = 1;
					display[endRow-1][i] = 1;
				}
				for(i=beginRow+1;i<endRow-1;i++){
					display[i][beginCol] = 2;
					display[i][endCol-1] = 2;
				}

				j = (row-1)/2;
				display[j][beginCol] = 0;
				display[j][endCol-1] = 0;

			}else if(n[x] == '1'){

				j = (row-1)/2;
				for(i=beginRow+1;i<j;i++){
					display[i][endCol-1] = 2;
					display[row-1-i][endCol-1] = 2;
				}


			}else if(n[x] == '2'){
				j = (row-1)/2;
				for(i=beginCol+1;i<endCol-1;i++){
						display[beginRow][i] = 1;
						display[j][i] = 1;
						display[endRow-1][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][endCol-1] = 2;
					display[row-1-i][beginCol] = 2;
				}
			}else if(n[x] == '3'){
				j = (row-1)/2;
				for(i=beginCol+1;i<endCol-1;i++){
					display[beginRow][i] = 1;
					display[j][i] = 1;
					display[endRow-1][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][endCol-1] = 2;
					display[row-1-i][endCol-1] = 2;
				}
			}else if(n[x] == '4'){
				j = (row-1)/2;
				for(i=beginCol+1;i<endCol-1;i++){
					display[j][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][endCol-1] = 2;
					display[i][beginCol] = 2;
					display[row-1-i][endCol-1] = 2;
				}
			}else if(n[x] == '5'){
				j = (row-1)/2;
				for(i=beginCol+1;i<endCol-1;i++){
					display[beginRow][i] = 1;
					display[j][i] = 1;
					display[endRow-1][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][beginCol] = 2;
					display[row-1-i][endCol-1] = 2;
				}

			}else if(n[x] == '6'){
				j = (row-1)/2;
				for(i=beginCol+1;i<endCol-1;i++){
					display[beginRow][i] = 1;
					display[j][i] = 1;
					display[endRow-1][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][beginCol] = 2;
					display[row-1-i][endCol-1] = 2;
					display[row-1-i][beginCol] = 2;
				}
			}else if(n[x] == '7'){
				for(i=beginCol+1;i<endCol-1;i++){
					display[beginRow][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][endCol-1] = 2;
					display[row-1-i][endCol-1] = 2;
				}
			}else if(n[x] == '8'){
				j = (row-1)/2;
				for(i=beginCol+1;i<endCol-1;i++){
					display[beginRow][i] = 1;
					display[j][i] = 1;
					display[endRow-1][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][endCol-1] = 2;
					display[i][beginCol] = 2;
					display[row-1-i][endCol-1] = 2;
					display[row-1-i][beginCol] = 2;
				}
			}else if(n[x] == '9'){
				j = (row-1)/2;
				for(i=beginCol+1;i<endCol-1;i++){
					display[beginRow][i] = 1;
					display[j][i] = 1;
					display[endRow-1][i] = 1;
				}
				for(i=beginRow+1;i<j;i++){
					display[i][endCol-1] = 2;
					display[i][beginCol] = 2;
					display[row-1-i][endCol-1] = 2;
				}
			}

			beginCol = endCol+1;
			endCol = beginCol+col;
		}

		for(i=0;i<row;i++){
			for(j=0;j<beginCol;j++){
				if(display[i][j] == 0)
					printf(" ");
				else if(display[i][j] == 1)
					printf("-");
				else if(display[i][j] == 2)
					printf("|");
			}
			printf("\n");
		}
		printf("\n");

	}
	return 0;
}