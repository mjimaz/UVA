#include <stdio.h>

int main(){
	int n, two;
	char c[6];

	scanf("%d",&n);

	while(1){

		if(n == 0)
			break;

		scanf("%s",&c);

		two = 0;

		if(c[3] == '\0'){
		if(c[0] == 't')
			two++;
		if(c[1] == 'w')
			two++;
		if(c[2] == 'o')
			two++;

		if(two > 1)
			printf("2\n");
		else
			printf("1\n");
		}else
			printf("3\n");

		n--;
	}
	return 0;
}