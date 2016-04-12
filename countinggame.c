#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int claps(int i){
	char A[100];
	if(i%7 == 0)
		return 1;
	else{
		sprintf(A, "%d", i);
		if(strspn("7", A) == 0)
			return 0;
		else
			return 1;
	}
}

int main(){

	int n, m, k, x,c;
	int num,t,p;

	while(1){
		scanf("%d %d %d",&n,&m,&k);

		if(!(n||m||k))
			break;

		x = m;
		c=0;
		num = -1;
		t=0;

		if(m == 1 || m == n){
			n = n + n - 2;
			while(c < k){
				if(claps(x) == 1)
					c++;
				if(c == k){
					num = x;
					break;
				}

				x = x + n;

			}
		}else{
			n = n + n - 2;
			p = m-1;
			x = m;
			while(c < k){
				if(claps(x) == 1)
					c++;
				if(c == k){
					num = x;
					break;
				}
				if(t == 0){
					x = x + n - p*2;
					t=1;
				}else{
					x = x + p*2;
					t=0;
				}
			}
		}

		printf("%d\n",num);
	}

	return 0;
}