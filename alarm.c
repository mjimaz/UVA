#include <stdio.h>

int main(){
	int h1, m1, h2, m2;
	int temp;
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && (h1 || m1 || h2 || m2)){

		if(h1 == h2)
			if(m1 <= m2)
				temp = m2-m1;
			else
				temp = (23*60)+(60-m1)+m2;
		else if(h1 < h2){
			h1 = h1*60;
			h2 = h2*60;
			temp = (h2+m2) - (h1+m1);
		}else{
			temp = (24*60) - (h1*60 + m1) + (h2*60) + m2;
		}
		printf("%d\n", temp);
	}
	return 0;
}