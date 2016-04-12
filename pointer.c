/*operators.c*/
#include <stdio.h> //Standard I/O library

void main(){
	char myarray[5] = {'5','3','8', 'o','t'};    // array i with integer elements
	void *ptr = myarray;         //assign array c address to pointer ptr2

	printf("Array myarray element: %c is at memory address: %d\n\n",*ptr, ptr);

	ptr++; //increment to the next element

	printf("Array myarray element: %c is at memory address: %d\n\n",*ptr, ptr);
}