#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nodi(int i){
	int start, div;
	if( i == 0)
		return 1;
	else{
		start = (int)sqrt(i);
		//sprintf("start = %d\n",start);
		div =0;
		do{
			if(i % start == 0){ //no remainder
				div=div+2;;
				//if(i/start != start)
				//	div++;
			}
		}while(--start >0);

		return div;
	}
}

int numDiv(int N) {
    int i = 0, factor = primes[i], ans = 1;
    while(factor * factor <= N) {
        int power = 0;
        while(N % factor == 0) { N /= factor; power++; }
        ans *= (power + 1);
        factor = primes[++i];
    }
    if(N != 1) ans *= 2;
    return ans;
}

int find_value(int value, int a[], int position){
	if (a[position] == value)
		return position;
	else if (a[position] > value){
		find_value(value,a, (position+ (sizeof(a)/sizeof(int)))/2);
	}else if (a[position] < value){
		find_value(value,a, position/2);
	}else
		return -1;

}

int main(){
	int t, i, j, numOfElements;
	int start ,div;
	int temp1, temp2;
	int* nod = (int*) malloc(sizeof(int) * 1000000);

	nod[0] = 1;
	for(i=1;i < 10; i++)
		nod[i] = nod[i-1] + nodi(i-1);

	for(i=0;i < 10; i++)
			printf("%d ", nod[i]);


	numOfElements = sizeof(nod)/sizeof(int);

	scanf("%d", &t);

    while(t--) {
		scanf ("%d %d", &i, &j);
		temp1 = find_value(i, nod, numOfElements/2);
		temp2 = find_value(j, nod, numOfElements/2);
		printf("Case %d: %d\n", (temp2-temp1 +1));
	}
	return 0;
}