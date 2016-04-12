#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef  unsigned long bignum;

void findPrimes(bignum topCandidate)
	{
	char * array = malloc(sizeof(unsigned char) * (topCandidate + 1));


	/* SET ALL BUT 0 AND 1 TO PRIME STATUS */
	bignum ss;
	bignum thisFactor = 2;
	bignum lastSquare = 0;
	bignum thisSquare = 0;

	assert(array != NULL);

	for(ss = 0; ss <= topCandidate+1; ss++)
		*(array + ss) = 1;
	array[0] = 0;
	array[1] = 0;

	/* MARK ALL THE NON-PRIMES */

	while(thisFactor * thisFactor <= topCandidate)
		{
		/* MARK THE MULTIPLES OF THIS FACTOR */
		bignum mark = thisFactor + thisFactor;
		while(mark <= topCandidate)
			{
			*(array + mark) = 0;
			mark += thisFactor;
			}


		/* SET thisFactor TO NEXT PRIME */
		thisFactor++;
		while(*(array+thisFactor) == 0) thisFactor++;
		assert(thisFactor <= topCandidate);
		}

	free(array);
	}

int main()
	{
	bignum topCandidate = 20000000;
	//if(argc > 1)
	//	topCandidate = atoll(argv[1]);
	findPrimes(topCandidate);
	return 0;
	}