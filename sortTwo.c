#include <stdio.h>
#include <stdlib.h>


int compare(const void *va, const void *vb)
{/*
const int *pa = *(const int (*)[2])va;
const int *pb = *(const int (*)[2])vb;
int i;

for (i = 0; i < 3; i++) {
if (pa[i] != pb[i])
return (pa[i] > pb[i]) ? 1 : -1;
}

return 0;*/

//return ( *(int*)va - *(int*)vb);
const int *ia = va;
const int *ib = vb;

if (*ia < *ib) return -1;
else if (*ia > *ib) return +1;
else return 0;
}


int main(){
	int **a = malloc(sizeof (int) * 4);
	int i, j;

	   if (a)
	   		for (i = 0; i < 4; i++)
     		a[i] = malloc(sizeof (int) * 4);

	a[0][0] = 5;
	a[0][1] = 4;
	a[0][2] = 0;
	a[0][3] = 3;
	a[1][0] = 4;
	a[1][1] = 99;
	a[1][2] = 1;
	a[2][0] = 3;
	a[2][1] = 4;
	a[2][2] = 0;

printf("before sorting\n");
for(i=0;i<4;i++){
					for(j=0;j<4;j++)
						printf("%d ",a[i][j]);
					printf("\n");
			}

 qsort(a[0], 4, sizeof(int), compare);
 qsort(a[1], 3, sizeof(int), compare);
 qsort(a[2], 3, sizeof(int), compare);


/*
    printf("&a[0][0] = %d\n",&a[0][0]);
    printf("&a[0][1] = %d\n",&a[0][1]);
    printf("&a[0][2] = %d\n",&a[0][2]);
    printf("&a[1][0] = %d\n",&a[1][0]);
    printf("&a[1][1] = %d\n",&a[1][1]);
    printf("&a[1][2] = %d\n",&a[1][2]);
    printf("&a[2][0] = %d\n",&a[2][0]);
	    printf("&a[2][1] = %d\n",&a[2][1]);
    printf("&a[2][2] = %d\n",&a[2][2]);
*/
printf("after sorting\n");
//printf((Arrays.deepToString(a));
printf("\n");
	for(i=0;i<4;i++){
					for(j=0;j<4;j++)
						printf("%d ",a[i][j]);
					printf("\n");
			}
			return 0;
}


