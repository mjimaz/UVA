#include <stdio.h>
#include <string.h>

#define MAX 10000

int main(){
	int length, i, j;
	char s1[MAX];
	int s2[MAX];
	int t1, t2;
	int palindrome;

	while(gets(s1) && strcmp(s1, "DONE")){

		length = strlen(s1);

		j=0;
		palindrome = 1;

		for(i=0; i< length; i++){
			t1 = (int)s1[i];
			if(t1 == 32 || t1 == 33 || t1 == 44 || t1 == 46 || t1 == 63)
				continue;
			if(t1 > 96){
				s2[j] = t1-32;
				j++;
			}else{
				s2[j] = t1;
				j++;
			}
		}
		for(i=0;i<j/2;i++){
			t1 = s2[i];
			t2 = s2[j-i-1];
			if(t1 != t2){
				palindrome = 0;
				break;
			}
		}
		if(palindrome == 1)
			printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
	return 0;
}