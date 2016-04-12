#include <stdio.h>
#include <stdlib.h>

int main(){
	int testCases, cases=1;
	int p, d, m, y;
	int temp;
	int days[12] =  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	scanf("%d",&testCases);
	getchar ();
	while(testCases-- > 0){
		p=280;

		scanf("%2d%2d%4d", &m, &d, &y);
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

				printf("%d %02d/%02d/%04d ",cases++,m,d,y);

				temp = m*100 + d;
				if(temp >=121 && temp <=219)
					printf("aquarius");
				else if(temp >=220 && temp <=320)
					printf("pisces");
				else if(temp >=321 && temp <=420)
					printf("aries");
				else if(temp >=421 && temp <=521)
					printf("taurus");
				else if(temp >=522 && temp <=621)
					printf("gemini");
				else if(temp >=622 && temp <=722)
					printf("cancer");
				else if(temp >=723 && temp <=821)
					printf("leo");
				else if(temp >=822 && temp <=923)
					printf("virgo");
				else if(temp >=924 && temp <=1023)
					printf("libra");
				else if(temp >=1024 && temp <=1122)
					printf("scorpio");
				else if(temp >=1123 && temp <=1222)
					printf("sagittarius");
				else
					printf("capricorn");
				printf("\n");
	}
	return 0;
}