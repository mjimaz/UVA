/* pointers.c */

#include <stdio.h> //Standard I/O library

void main(){
    int x = 8; // Declare integer variable x
    int *ptr, *ptr2, *ptr3 ;  // Pointer which stores memory address of a int type variable
	char *ptr4;
    printf( "Before initialization the value of ptr = %d\n", ptr);
    printf( "Before initialization the value of ");
    printf("ptr2=%d, ptr3=%d, ptr4=%d\n", ptr2, ptr3, ptr4);

    ptr = &x; // assign variable x memory address to ptr
    printf( "After initialization the value of ptr = %d\n", ptr);
}