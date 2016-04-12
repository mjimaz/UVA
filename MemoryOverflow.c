#include <stdio.h>

int main(){
	int testcases, n, k, rem, i, j, m;
	int cases =1, recognize;
	char p[505], memory[505] ;

	scanf("%d",&testcases);

	getchar();

	while(1){
		if(testcases == 0)
			break;

		scanf("%d %d %s",&n, &k, &p);
		recognize = 0;
		m=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(p[i] == memory[j]){
					recognize++;
					break;
				}
			}
			memory[i%k] = p[i];
			if(m<k)
				m++;
		}

		printf("Case %d: %d\n",cases, recognize);
		testcases--;
		cases++;
	}
	return 0;
}