#include <stdio.h>
#include <string.h>

#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

int month(char *givenmonth){
	int i;
	char * m[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	for(i=0;i<12;i++)
		if(strcmp(givenmonth,m[i]) == 0)
			return i+1;

	return -1;

}



int main(){
	int testcases, cases=1, day1, day2, year1, year2, leapyears, between;
	char month1[20], month2[20];
	int m1,m2, leap1;
	int r4, r100, r400;
	//char * m[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;
		leapyears = 0;
		leap1=0;

		scanf("%s %d, %d",&month1, &day1, &year1);
		scanf("%s %d, %d",&month2, &day2, &year2);


		//printf("value %d\n",month("January"));
		//printf("value %d\n",month("June"));
		m1=month(month1);
		m2=month(month2);

		r4 = year1%4;
		r100 = year1%100;
		r400 = year1%400;

		if(year1 == year2){
			if(r4 == 0 || (r100 == 0 && r400 == 0)){

				if(m1 <= 2 && m2 > 2)
					leapyears++;
				else if(m1 == 2)
					if(day2 > 28)
						leapyears++;
			}
		}else{
			if(r4 == 0 || (r100 == 0 && r400 == 0)){
				leap1=1;
				if(m1 < 3)
					leapyears++;
			}

				r4 = year2%4;
				r100 = year2%100;
				r400 = year2%400;

				if(r4 == 0 || (r100 == 0 && r400 == 0)){
					if( m1 < 2)
						leapyears--;
					else if (m1 == 2){
						if(day2 < 29)
							leapyears--;
						else{
							if(leap1 == 0)
								leapyears++;
						}
					}else{
						if(leap1 == 0)
							leapyears++;
					}
				}
		}


		between = (year2 - year1)/4;

		leapyears += between;

		printf("Case %d: %d\n",cases, leapyears);
		cases++;
		testcases--;
	}
return 0;
}