/* array.c */
#include <stdio.h> //Standard I/O library

void main(){
	char colour1[]="Green";
            char colour2[]="Indigo";
            char colour3[]="Yellow";
            char colour4[]="Violet";
           char colour5[]="Blue";
           char colour6[]="Red";
	char colour7[]="Orange";

	 char *rainbow_colours[7];
	 int i;

	 rainbow_colours[0]= colour6;
	 rainbow_colours[1]= colour7;
	 rainbow_colours[2]= colour3;
	 rainbow_colours[3]= colour1;
	 rainbow_colours[4]= colour5;
	 rainbow_colours[5]= colour2;
	 rainbow_colours[6]= colour4;

	 for(i=0;i<7;i++)
	 	printf("%s\n",rainbow_colours[i]);

	 for(i=0;i<7;i++)
	 	printf("%d\n",&rainbow_colours[i]);

	 printf("\n\n%d\n",colour1);
	 printf("%d\n",colour2);printf("%d\n",colour3);printf("%d\n",colour4);printf("%d\n",colour5);printf("%d\n",colour6);
	 printf("%d\n",colour7);
}
