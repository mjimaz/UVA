#include<stdio.h>
#include<limits.h>
#include<string.h>

typedef int bool;
#define true 1
#define false 0

int no_of_pal_parts(char *str,int n){

int i,j,k,c;
int is_pal[10][10];
int p[10]; /* this stores the no. of continuous palindromes upto last element starting at index i */

printf("string = %s, length = %d\n", str,n);

memset(is_pal,0,sizeof(is_pal));
/*for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		is_pal[i][j] = 0;
*/


for(i = n-1; i >= 0; i--){
	for(j = i; j < n; j++){
if( i== j)
is_pal[i][j] = 1;
else if(str[i] == str[j]){
	if(j-1 == 1)
		is_pal[i][j] = 1;
	else
		is_pal[i][j] =is_pal[i+1][j-1];
//is_pal[i][j] = ((j-i == 1)?1:is_pal[i+1][j-1]);
}else
is_pal[i][j] = 0;
}
}

printf("int max %d\n",INT_MAX);

p[n-1] = 1;
j = n-1;
for(i = n-2; i >= 0; i--){
	p[i] = INT_MAX;
	if(is_pal[i][j] == 1)
		p[i] = 1;
	else{
		for(k = j-1; k >= i; k--){
			if(is_pal[i][k] == 1){
				c = 1 + p[k+1];
				if(c < p[i])
					p[i] = c;
			}
		}
	}
}
return (p[0] - 1);
}

int main(){
	int testcases;
	int n;
	char str[1001];
	int temp;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		scanf("%s",&str);
		n = strlen(str);


		temp = no_of_pal_parts(str,n);
		printf("Min cuts needed for Palindrome Partitioning is %d", temp);
		testcases--;
}
return 0;
}