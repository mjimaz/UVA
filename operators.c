/*operators.c*/
#include <stdio.h> //Standard I/O library

void main(){
	int x = 30, y = 67;
	int *ptr1, *ptr2;

	ptr1 = &x;

	printf("Before:\tThe value of ptr %d and the value of x %d \n", ptr1, x);
	*ptr1++;
	printf("After:\tThe value of ptr %d and the value of x %d \n", ptr1, x);

	ptr2 = &y;

	printf("\nBefore:\tThe value of ptr %d and the value of y %d \n", ptr2, y);
	(*ptr2)++;
	printf("After:\tThe value of ptr %d and the value of y %d \n", ptr2, y);
 }