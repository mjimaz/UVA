#include <stdio.h>

int main(){
	int testcases, n, i, temp, students[100001], senior, junior, max_diff;
	int x, y;
	scanf("%d",&testcases);

	getchar();

	while(1){
		if(testcases == 0)
			break;

		scanf("%d",&n);

		for(i=0;i<n;i++){
			scanf("%d",&students[i]);
		}

		senior = students[0];
		junior = students[1];
		max_diff = senior - junior;
		x=0;
		y=1;
		for(i=1;i<n;i++){
			if(students[i]>senior && i!= n-1){
				senior = students[i];
				x=i;
			}else if(students[i]<junior || x>y){
				 junior = students[i];
				 y=i;
			}

			if(x < y){
				temp = senior - junior;

				if(temp > max_diff)
					max_diff = temp;
			}
		}



		printf("%d\n",max_diff);
		testcases--;
	}
	return 0;
}