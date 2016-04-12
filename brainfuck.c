#include <stdio.h>

int main(){
	int i, testcases, index, temp, cases = 1;
	char ch, nl;
	unsigned char a[100];
	char str[100001];

	scanf("%d",&testcases);

	getchar();
	while(testcases-- > 0){

		gets(str);

		for(i=0;i<100;i++)
			a[i]=0;

		index = 0;

		for (i = 0; str[i]; i++){

			if(str[i] == '>'){
				temp = index+1;
				if(temp == 100)
					index=0;
				else
					index = temp;
			}else if(str[i] == '<'){

				temp = index-1;
				if(temp == -1)
					index=99;
				else
					index = temp;
			}else if(str[i] == '+'){

				temp = a[index]+1;
				if(temp == 256)
					a[index]=0;
				else
					a[index] = temp;
			}else if(str[i] == '-'){
				temp = a[index]-1;
				if(temp == -1)
					a[index]=255;
				else
					a[index] = temp;
			}
		}
		printf("Case %d:", cases++);

		for(i=0;i<100;i++){
			printf(" %02X",a[i]);
		}
		printf("\n");
	}
	return 0;
}