#include <stdio.h>


int main(){
	int testcases;
	int s1,s2,s3;
	int cases=0;
	int mid;

	scanf("%d",&testcases);
	while(1){

		if(cases == testcases)
			break;

		scanf("%d %d %d",&s1,&s2,&s3);

		if(s2 > s1){
			if(s2<s3)
				mid = s2;
			else{
				if(s1 < s3)
					mid = s3;
				else
					mid = s1;
			}
		}else{
			if(s1<s3)
				mid = s1;
			else{
				if(s2 < s3)
					mid = s3;
				else
					mid = s2;
			}
		}
		cases++;
		printf("Case %d: %d\n",cases,mid);
	}
	return 0;
}