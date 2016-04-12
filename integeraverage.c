#include <stdio.h>

int main(){
	int n,i;
	int cases=1;
	int sum;
	int temp;
	int q, r;
	int digits, digitsR, digitsQ;
	int spaces;
	int negative;
	int a, b, c;
	int gcd;

	while(1){
		scanf("%d",&n);

		if(n == 0)
			break;

		sum = 0;
		i = n;
		negative = 0;
		while(i--){
			scanf("%d",&temp);
			sum +=temp;
		}

		printf("Case %d:\n", cases);

		if(sum < 0){
			q = -1*sum/n;
			r = -1*sum%n;
			negative = 1;
		}else{
			q = sum/n;
			r = sum%n;
		}

		gcd = 0;
		a = r;
		b = n;
		c = a%b;

		while(c != 0){
			gcd = 1;
			a = b;
			b = c;
			c = a%b;
		}
		if(gcd == 1){
			r = r/b;
			n = n/b;
		}

		if(r == 0){
			if(negative == 1)
				printf("- ");
			printf("%d\n",q);
		}else if(q == 0){
			digits = 0;
			i = n;
			while(i >= 1){
				digits++;
				i = i/10;
			}
			digitsR = -1;
			i = r;
			while(i >= 1){
				digitsR++;
				i = i/10;
			}

			if(negative == 1){
				for(i=1;i<2+digits-digitsR;i++)
					printf(" ");
				printf("%d\n- ",r);

				for(i=0;i<digits;i++)
					printf("-");
				printf("\n  %d\n",n);
			}else{
				for(i=1;i<digits;i++)
					printf(" ");
				printf("%d\n",r);
				for(i=0;i<digits;i++)
					printf("-");
				printf("\n%d\n",n);
			}


		}else{
			digits = 0;
			i = n;
			while(i >= 1){
				digits++;
				i = i/10;
			}
			digitsR = -1;
			i = r;
			while(i >= 1){
				digitsR++;
				i = i/10;
			}
			digitsQ = -1;
			i = q;
			while(i >= 1){
				digitsQ++;
				i = i/10;
			}
			if(negative == 1){
				for(i=0;i<2+digits-digitsR+digitsQ;i++)
					printf(" ");
				printf("%d\n",r);
				printf("- %d",q);
				spaces=3+digitsQ;
			}else{
				for(i=0;i<digits-digitsR+digitsQ;i++)
					printf(" ");
				printf("%d\n",r);
				printf("%d",q);
				spaces=1+digitsQ;
			}
			for(i=0;i<digits;i++)
				printf("-");
			printf("\n");
			for(i=0;i<spaces;i++)
				printf(" ");
			printf("%d\n",n);
		}
		cases++;
	}
	return 0;
}