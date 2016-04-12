#include <stdio.h>
#include <stdlib.h>

int main(){
	int p, d, m, y;
	int temp;
	int days[12] =  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	while(scanf("%d %d %d %d", &p, &d, &m, &y) && (p || d || m || y)){

		while(p>0){

			if(m == 2 && ((y%400 ==0) || ((y%4==0)&&(y%100!=0)))){

				temp = days[m-1]+1 - d;
				if(temp == 0){
						m=3;
						d=1;
						p--;
				}else if(temp == p){
					d = d+temp;
					p=0;
				}else if(temp < p){
					d = d+temp;
					p = p-temp;
				}else{
					d = d+p;
					p=0;
				}

			}else{

				temp = days[m-1] - d;

				if(temp == 0){
					if(m==12){
						m=1;
						y++;
					}
					else
						m++;

					d=1;
					p--;
				}else if(temp == p){
					d = d+temp;
					p=0;
				}else if(temp < p){
					d = d+temp;
					p = p-temp;
				}else{
					d = d+p;
					p=0;
				}

			}

		}
		printf("%d %d %d\n",d,m,y);
	}

return 0;
}