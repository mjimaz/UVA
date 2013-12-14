#include <stdio.h>
#include <stdlib.h>


#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

int main (){
    int i, j, from, to, temp;
    int max, length, num;
    int* cl = (int*) malloc(sizeof(int) * 1000000);

    while ( scanf ("%d %d", &i, &j) != EOF ) {
		if(i > j){
			from = j;
			to = i;
		}else{
			from = i;
			to = j;
		}

        max = 0;
        cl[1] = 1;

        while ( from <= to ) {
            num = from;
            length = 1;
            temp = cl[from];

            while ( num != 1 && temp == 0) {
                if ( num % 2 == 1 ) num = 3 * num + 1;
                else num /= 2;

				if(num < 1000000)
                	temp = cl[num];
                if(temp !=0){
					cl[from] = length + temp;
				}

                	length++;
            }

            max = max(max, cl[from]);

            from++;
        }
        printf ("%d %d %d\n", i, j, max);


    }

	return 0;
}