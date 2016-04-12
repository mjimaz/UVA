#include <stdio.h>
#include <stdlib.h>

struct num{
	int value;
	int negativeCount;
	int zeroCount;
};

struct num * sequence;

void updateNegative(int idx, int val, int n){
    while(idx<=n){
        sequence[idx].negativeCount += val;
        idx+=(idx&-idx);
    }
}

void updateZero(int idx, int val, int n){
    while(idx<=n){
        sequence[idx].zeroCount += val;
        idx+=(idx&-idx);
    }
}


int product(int idx1){
    int sum=0;
    while(idx1> 0){
        sum+=sequence[idx1].negativeCount;
        idx1-=(idx1&-idx1);
    }
    return sum;
}

int zeroCount(int idx1){
    int sum=0;
    while(idx1> 0){
        sum+=sequence[idx1].zeroCount;
        idx1-=(idx1&-idx1);
    }
    return sum;
}

int main(){
	int k,n,i,v,j,m;
	int temp, negative;
	char ch;
	char c[100];
	char* output = (char*) malloc(sizeof(char) * 1000010);

	sequence = (struct num*) malloc(sizeof(struct num) * 1000010);

	while(scanf("%d %d",&n, &k) != EOF){

		for(i=1;i<=n;i++){
			scanf("%d",&temp);
			sequence[i].value = temp;
			sequence[i].negativeCount = 0;
			sequence[i].zeroCount = 0;
		}

		for(i=1;i<=n;i++){
			temp = sequence[i].value;
			if(temp < 0)
				updateNegative(i, 1, n);
			else if(temp == 0)
				updateZero(i, 1, n);
		}

		m=0;

		while(1){
			if(k == 0)
				break;
			gets(c);
			scanf("%c %d %d",&ch, &i, &v);

			if(ch == 'P'){
				if(i == 1)
					negative = zeroCount(v);
				else
					negative = zeroCount(v) - zeroCount(i-1);

				if(negative != 0)
						output[m]='0';
				else{
					if(i == 1)
						negative = product(v);
					else
						negative = product(v) - product(i-1);

					temp = negative%2;

					if(temp == 0)
						output[m]='+';
					else
						output[m]= '-';
				}
				m++;

			}else{

				temp = sequence[i].value;

				if(temp == 0){
					if(v < 0){
						updateNegative(i, 1, n);
						updateZero(i,-1,n);
					}else if(v > 0){
						updateZero(i,-1,n);
					}
				}else if(temp > 0){
					if(v < 0)
						updateNegative(i, 1, n);
					else if(v == 0)
						updateZero(i,1,n);
				}else{
					if(v > 0)
						updateNegative(i, 1, n);
					else if(v == 0){
						updateNegative(i, 1, n);
						updateZero(i,1,n);
					}
				}

				sequence[i].value = v;
			}

			k--;
		}
		output[m] = '\0';
		printf("%s\n",output);
	}

return 0;
}