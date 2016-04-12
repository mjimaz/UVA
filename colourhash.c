#include <stdio.h>
#include <string.h>

int s[] = {0, 3, 4, 3, 0, 5, 6, 5, 0, 1, 2, 1, 0, 7, 8, 7, 0, 9, 10, 9, 0, 1, 2, 1};
int moves[16];
int r[24];

int colourhash(int ch[], int rotate, int steps){
	int temp = 0;
	int i, j;

	moves[steps] = rotate;

	if(rotate == 1){
		j = 2;
		for(i=0;i<12;i++){
			r[j] = ch[i];
			j++;
			if(i == 9)
				j = 0;
		}
		for(i=12;i<24;i++)
			r[i] = ch[i];
	}else if(rotate == 2){
		j = 10;
		for(i=0;i<12;i++){
			r[j] = ch[i];
			j++;
			if(i == 11)
				j = 0;
		}
		for(i=12;i<24;i++)
			r[i] = ch[i];
	}else if(rotate == 3){
		j = 14;
		for(i=12;i<24;i++){
			r[j] = ch[i];
			j++;
			if(i == 21)
				j = 12;
		}
		for(i=0;i<12;i++)
			r[i] = ch[i];
	}else{
		j = 22;
		for(i=12;i<24;i++){
			r[j] = ch[i];
			j++;
			if(i == 23)
				j = 12;
		}
		for(i=0;i<12;i++)
			r[i] = ch[i];
	}
	//check if match
	for(i=0;i<24;i++){
		if(ch[i] != s[i]){
			temp = -1;
			break;
		}
	}
	return temp;

}

int main(){

	int n, i;
	int c[25];
	int step;
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16;

	scanf("%d",&n);

	while(1){

		if(n == 0)
			break;

		for(i=0;i<24;i++)
			scanf("%d",&c[i]);

		step = 0;

		for(i=0;i<24;i++){
			if(c[i] != s[i]){
				step = -1;
				break;
			}
		}

		if(step == 0)
			printf("PUZZLE ALREADY SOLVED\n");
		else{
			for(i1=1;i1<=4;i1++){
				for(i2=1;i<=4;i2++){
				}
			}
		}

		n--;
	}

	return 0;
}