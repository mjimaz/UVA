#include <stdio.h>

int main(){
	int months, records;
	float downPay, loan;
	float carValue;
	int m[110],i;
	float d[110];
	int tempm;
	int numMonth;
	float monthlyPayment;

	while(1){
		scanf("%d %f %f %d",&months, &downPay, &loan, &records);

		if(months < 0)
			break;

		carValue = loan + downPay;
		i=0;
		monthlyPayment = loan/months;
		while(i< records){
			scanf("%d %f", &m[i], &d[i]);
			i++;
		}

		carValue = carValue - (carValue*d[0]);
		i = 0;
		tempm = 1;
		numMonth = 0;
		while (1){
			if(loan < carValue)
				break;

			loan = loan - monthlyPayment;
			if(tempm == m[i+1])
				i++;

			numMonth++;

			tempm++;

			carValue = carValue - (carValue*d[i]);
		}
		if(numMonth == 1)
			printf("1 month\n");
		else
			printf("%d months\n", numMonth);

	}
	return 0;
}