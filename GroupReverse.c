#include <stdio.h>
#include <string.h>

int main(){
	char sentence[110], temp;
	int g, length, groups, i, j, swaps, s, turns;

	while(1){
		scanf("%d", &groups);
		if(groups == 0)
			break;
		scanf("%s", &sentence);

		length = strlen(sentence);

		g = length/groups;
		swaps = g/2;

		turns = 0;
		s = swaps;

		while(turns<groups){
			i = turns*g;
			j=i+g-1;
			while(s>0){
				temp = sentence[i];
				sentence[i] = sentence[j];
				sentence[j] = temp;
				i++;
				j--;
				s--;
			}
			s = swaps;
			turns++;
		}
	printf("%s\n",sentence);
	}
	return 0;
}