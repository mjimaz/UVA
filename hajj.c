#include <stdio.h>

int main(int argc, const char * argv[]){
	char s[10];
	int cases = 1;

	while(1){
		scanf("%s", &s);

		if(s[0] == '*')
			break;

		if(s[0] == 'H')
			printf("Case %d: Hajj-e-Akbar\n", cases);
		else
			printf("Case %d: Hajj-e-Asghar\n", cases);
		cases++;
	}
	return 0;
}