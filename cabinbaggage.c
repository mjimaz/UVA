#include <stdio.h>

int main(){
	int testcases, bags=0, accepted;
	float length, width, depth, weight, temp;

	scanf("%d",&testcases);

	while(1){
		if(testcases == 0)
			break;

		scanf("%f %f %f %f",&length, &width, &depth, &weight);
		accepted = 1;
		temp = length+ width+ depth;

		if(weight > 7.00 || temp > 126.00)
			accepted = 0;
		else if (length > 56.00 && temp > 125.00)
			accepted = 0;
		else if (width > 45.00 && temp > 125.00)
			accepted = 0;
		else if (depth > 25.00 && temp > 125.00)
			accepted = 0;
		else
			bags++;

		printf("%d\n",accepted);

		testcases--;
	}
	printf("%d\n",bags);

return 0;
}