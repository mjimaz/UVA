#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1010

struct container{
	char value[MAX];
	int index;
};

int main(){
	char temp;
	char* c = (char*) malloc(sizeof(char) * MAX);
	int length, i, total,j;
	int cases = 1, index, newContainer;

	struct container * containers = (struct container*) malloc(sizeof(struct container) * MAX);;

	while(1){
		total = 0;
		i=0;
		gets(c);

		if(strcmp(c, "end") == 0)
			break;

		length = strlen(c) - 1;

		containers[0].index = 0;
		containers[0].value[0] = c[0];

		while(1){

			if(i == length)
				break;
			i++;
			newContainer = 1;
			temp = c[i];

			for(j=0;j<=total;j++){
				index = containers[j].index;

				if(temp <= containers[j].value[index]){
					newContainer = 0;
					index++;
					containers[j].index = index;
					containers[j].value[index] = temp;
					break;
				}
			}

			if(newContainer == 1){
				total++;
				containers[total].index = 0;
				containers[total].value[0] = temp;
			}
		}
		printf("Case %d: %d\n",cases++,++total);
	}
	return 0;
}