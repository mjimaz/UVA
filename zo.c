#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[1000010];
	char c;
	int* n = (int*) malloc(sizeof(int) * 1000010);
	int start, end, i, j, testcases, cases=1,num, len;

	while(gets(str)){

		len = strlen (str);

        if ( len == 0 ) break;

		num=0;
		c=str[0];
		n[0]=0;
		for(i=1;str[i];i++){
			if(c == str[i]){
				n[i] = num;
			}else{
				num++;
				n[i] = num;
				c = str[i];
			}
		}
		scanf("%d", &testcases);

		printf("Case %d:\n", cases++);

		while(testcases-- > 0){
			scanf("%d %d", &i, &j);
			if(n[i] == n[j])
				printf("Yes\n");
			else
				printf("No\n");

		}
		getchar ();
	}
	return 0;
}