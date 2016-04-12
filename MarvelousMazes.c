#include <stdio.h>
#include <string.h>

int main(){
	char maze[135];
	int repeatChar, i, length, j;
	while(gets(maze)){

		length = strlen(maze);
		repeatChar = 0;
		for(i=0;i<length;i++){
			if(maze[i] >= '1' &&  maze[i] <= '9'){
				repeatChar += (maze[i] - '0');
			}else if(maze[i] == '!'){
				printf("\n");
				repeatChar = 0;
			}else if(maze[i] == 'b'){
				for(j=0;j<repeatChar;j++)
					printf(" ");
				repeatChar = 0;
			}else{
				for(j=0;j<repeatChar;j++)
					printf("%c",maze[i]);
				repeatChar = 0;
			}
		}
		printf("\n");
	}
	return 0 ;
}