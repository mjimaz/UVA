#include <stdio.h>
#include <stdlib.h>

#define p1 0
#define p2 3
#define p3 6
#define p4 9
#define p5 12
#define p6 15
#define p7 18
#define p8 21
#define p9 24
#define p10 27
#define p11 30
#define p12 33
#define p13 36

int main(){
	char **cards = malloc(sizeof (char) * 20);
	int i;
	int cardsleft[13];
	char temp[5];

	if (cards)
		for (i = 0; i < 20; i++)
     		cards[i] = malloc(sizeof (char) * 20);

     	scanf("%s",&cards[0]);

    do{
		scanf("%s",&cards[1]);
		scanf("%s",&cards[2]);
     	scanf("%s",&cards[3]);

     	temp = cards[3][p13];

	}while(1);
	return 0;
}