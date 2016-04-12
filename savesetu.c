#include <stdio.h>

typedef unsigned long bignum;

int main(int argc, const char * argv[]){
	int t;
	char s[10];
	bignum k,total=0;

	scanf("%d",&t);

	while(1){
		if(t == 0)
			break;
		scanf("%s", &s);

		if(s[0] == 'd'){
			scanf("%ld", &k);
			total +=k;
		}else
			printf("%ld\n",total);

		t--;
	}
	return 0;
}