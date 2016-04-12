#include <stdio.h>
#include <stdlib.h>

#define MAX 100001

int cmpfunc(const void *va, const void *vb){
	const char *ia = va;
	const char *ib = vb;

	if (*ia < *ib) return -1;
	else if (*ia > *ib) return +1;
	else return 0;
}

int main(){
	int n, g;
	int i;
	int s, r;
	int win, lose, draw;
	int temp;
	int points;
	int lost[MAX];

	while(scanf("%d %d",&n, &g) == 2){
		i=0;

		win = 0;
		lose = 0;
		draw = 0;

		while(1){
			if(i == n)
				break;
			scanf("%d %d",&s, &r);

			temp = s - r;

			if(temp == 0)
				draw++;
			else if(temp > 0)
				win++;
			else{
				lost[lose] = temp*-1;
				lose++;
			}
			i++;
		}

		if(lose > 0)
			qsort(lost, lose, sizeof (int), cmpfunc);

		i = 0;

		while(1){
			if(g == 0)
				break;

			if(draw != 0){
				win++;
				draw--;
				g--;
			}else if(lose != 0 && lost[i] <= g){
				draw++;
				lose--;
				g = g - lost[i];
				i++;
			}else
				break;
		}
		points = win*3 + draw;

		printf("%d\n",points);

	}
	return 0;
}