#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct grid{
	int row;
	int col;
	int sum;
};

int cmpfunc(const void *va, const void *vb){
	const struct grid *ia = va;
	const struct grid *ib = vb;

	if ((*ia).sum < (*ib).sum) return -1;
	else if ((*ia).sum > (*ib).sum) return +1;
	else return 0;
}

int main(){
	int testcases;
	char s[110];
	char colours[110];
	int k, m, l, n;
	int i, j, length;
	int row, col;
	int cases = 1;
	int sqr;
	int found;
	int end;
	int t;

	struct grid g[100];

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		scanf("%s",&s);

		length = strlen(s);

		sqr = sqrt(length);

		j=0;
		i=2;
		while(i<=sqr){
			if(length%i == 0){
				g[j].row = i;
				g[j].col = length/i;
				g[j].sum = g[j].row + g[j].col;

				if(g[j].row != g[j].col){
					j++;
					g[j].row = length/i;
					g[j].col = i;
					g[j].sum = g[j].row + g[j].col;
				}
				j++;
			}
			i++;
		}

		qsort(g, j, sizeof(struct grid), cmpfunc);

		end = j;
		t=0;
		found = 0;

		while(1){
			if(t == end)
				break;
			j=0;
			k=0;
			m = g[t].row;
			l = 0;
			n = g[t].col;
			found = 1;

			for(i=l; i<n;i++){
				colours[i] = s[j++];
			}

			while(k<m && l<n){

				n--;
				m--;

				for(i=k; i<m;i++){
					if(colours[n] != s[j++]){
						found = 0;
						break;
					}
				}
				if(found == 0 || j == length)
					break;

				for(i=n-1; i>l;i--){

					if(colours[i] != s[j++]){
						found = 0;
						break;
					}
				}
				if(found == 0 || j == length)
					break;

				for(i=m; i>k;i--){
					if(colours[l] != s[j++]){
						found = 0;
						break;
					}
				}
				if(found == 0 || j == length)
					break;
				k++;
				l++;

				for(i=l; i<n;i++){
					if(colours[i] != s[j++]){
						found = 0;
						break;
					}
				}

				if(found == 0 || j == length)
					break;
			}
			if(found == 1)
				break;

			t++;
		}
		if(found == 1)
			printf("Case %d: %d\n",cases, g[t].sum);
		else
			printf("Case %d: -1\n", cases);

		testcases--;
		cases++;
	}
	return 0;
}