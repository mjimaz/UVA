#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i, j,strong, weak;
	int secretcode[1001], guess[1001], hints[1001];
	int game=1;


	while(1){
		scanf("%d",&n);

		if(n == 0)
			break;

		printf("Game %d:\n",game);
		game++;

		for(i=0;i<n;i++)
			scanf("%d",&secretcode[i]);

		while(1){
			strong=0;
			weak=0;
			for(i=0;i<n;i++)
				scanf("%d",&guess[i]);

			if(guess[0] == 0)
				break;

			for(i=0;i<n;i++)
				hints[i] = 1;
			for(i=0;i<n;i++)
				if(secretcode[i] == guess[i]){
					strong++;
					guess[i]=0;
					hints[i]=0;
				}
			if(strong < n){
				for(i=0;i<n;i++){
					if(guess[i] != 0){
						for(j=0;j<n;j++){
							if(hints[j] == 1 && guess[i] == secretcode[j]){
								guess[i] = 0;
								hints[j] = 0;
								weak++;
								break;
							}
						}
					}
				}
			}
			printf("    (%d,%d)\n",strong,weak);
		}
	}
	return 0;
}