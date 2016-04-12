#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100000

int main(){
	char * word = malloc(sizeof(char) * (MAX_SIZE +1));
	char * reverse = malloc(sizeof(char) * (MAX_SIZE +1));

	int length,i;
	int n, start;
	char *ret;

	while(scanf("%s",word) != EOF){
		length = strlen(word);

		for(i=0;i<length;i++)
			*(reverse + length - i - 1) = *(word + i);

		*(reverse+length) = '\0';

		printf("word %s, reverse %s\n",word, reverse);

		//char *strstr(const char *s1, const char *s2) -- locates the first occurrence of the string s2 in string s1.

		//char *strpbrk(const char *s1, const char *s2) -- returns a pointer to the first occurrence in string s1 of any character from string s2, or a null pointer if no character from s2 exists in s1

		n = strspn(word, reverse);

		printf("n=%d\n",n);

		n = strspn(word, reverse);

		printf("Length of initial segment matching %d\n", n );

		 ret = strpbrk(reverse, word);
		   if(ret)
		   {
		      printf("First matching character: %c\n", *ret);
		   }
		   else
		   {
		      printf("Character not found");
		   }


		printf("\n");
	}
	return 0;
}