#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000000

int main(){
	int board[101];
	int *players = malloc(sizeof(int) * (MAX_SIZE + 2));

	int testcases;
	int p, snakenladder, dicerolls;
	int x,y, playerdice, turn, temp;

	scanf("%d",&testcases);
	while(1){
		if(testcases == 0)
			break;

		scanf("%d %d %d", &p, &snakenladder, &dicerolls);

		for(x=1;x<=100;x++)
			board[x]=0;

		while(1){
			if(snakenladder == 0)
				break;

			scanf("%d %d",&x,&y);
			board[x] = y;

			snakenladder--;
		}

		for(x=1;x<=p;x++)
			players[x]=1;


		playerdice = 1;
		turn=0;
		while(1){
			if(dicerolls==0)
				break;

			scanf("%d",&x);

			if(turn == 0){
				temp = players[playerdice] + x;
				y = board[temp];
				if(y != 0){
					players[playerdice] = y;

				}else{
					players[playerdice] = temp;
				}

				if(players[playerdice] >= 100){
					players[playerdice]=100;
					turn=1;
				}

				playerdice++;
				if(playerdice > p){
					playerdice = 1;
				}
			}
			dicerolls--;
		}

		temp=1;
		while(1){
			if(temp > p)
				break;

			printf("Position of player %d is %d.\n", temp, players[temp]);
			temp++;
		}
		testcases--;
	}
	return 0;
}