#include <stdio.h>

int main(){
	char HB[16][10]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };
	char people[101][101];
	int num, singers, words,i,j;

	scanf("%d",&num);
	i = 0;

	while(1){
		if(i == num)
			break;
		scanf("%s",&people[i]);
		i++;
	}
	i = 0;
	j = 0;

	singers=1;

	while(singers || words){
		words = 1;

		printf("%s: %s\n",people[i],HB[j]);
		i++;
		j++;
		if(i == num){
			i=0;
			singers=0;
		}
		if(j == 16){
			j=0;
			words = 0;
		}
	}
	return 0;
}