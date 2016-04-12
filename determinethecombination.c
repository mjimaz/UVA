#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 35

int cmpfunc(const void *va, const void *vb){
	const char *ia = va;
	const char *ib = vb;

	if (*ia < *ib) return -1;
	else if (*ia > *ib) return +1;
	else return 0;
}

void combination(char s[], char temp[], int start, int end, int index, int r){
	int i;
    if (index == r){
		temp[index] = '\0';
		printf("%s\n",temp);
        return;
    }

    for (i=start; i<=end && end-i+1 >= r-index; i++){
        temp[index] = s[i];
        combination(s, temp, i+1, end, index+1, r);
        while(s[i] == s[i+1]) i++;
    }

}

int main(){
	char s[MAX];
	int r, length;
	int i, end;
	char temp1[MAX];
	int j, k,m;

	while(scanf("%s %d",&s, &r) == 2){

		length = strlen(s);

		s[length] = '\0';

		qsort(s, length, sizeof (char), cmpfunc);

		combination(s, temp1, 0, length-1, 0, r);
	}
	return 0;
}