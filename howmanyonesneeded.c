#include <stdio.h>
#include <string.h>

int main(){
	int a, b;
	unsigned int v;          // 32-bit value to find the log2 of
	register unsigned int r; // result of log2(v) will go here
	register unsigned int shift;

	while(1){
		scanf("%d %d",&v, &b);
		if(v == 0 && b == 0)
			break;




		r =     (v > 0xFFFF) << 4; v >>= r;
		shift = (v > 0xFF  ) << 3; v >>= shift; r |= shift;
		shift = (v > 0xF   ) << 2; v >>= shift; r |= shift;
		shift = (v > 0x3   ) << 1; v >>= shift; r |= shift;
		r |= (v >> 1);
		r++;

		printf("number of bit %d\n",r);
	}

	return 0;
}