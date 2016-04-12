#include <stdio.h>
#include <string.h>

int main(){
	int a, b;
	int testcases;
	char c[10];
	int i, j, k, l, wl;
	char dictionary[10000][20], words[20];
	int length[10000];

	scanf("%d",&testcases);

	while(1){
		gets(c);
		i=0;

		if(testcases == 0)
			break;
		while(1){
			scanf("%s",&dictionary[i]);
			if(dictionary[i][0] == '#')
				break;
			l = strlen(dictionary[i]);
			length[i] = l;
			i++;
		}
		while(1){
			scanf("%s",&words);
			if(words[0] == '#')
				break;

			wl = strlen(words);
			for(j=0;j<i;j++){
				if(wl == length[j] || wl == length[j]+1 || wl == length[j]-1 ){
				}
			}
		}

		testcases--;
	}

	return 0;
}