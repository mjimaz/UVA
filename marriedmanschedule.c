#include <stdio.h>
#include <stdlib.h>

int main(){
	int testCases,i;
	int whs,wms,whe,wme;
	int mhs,mms,mhe,mme;
	int cases = 0;

	scanf("%d",&testCases);
	getchar ();
	while(testCases-- > 0){

		scanf("%d:%d %d:%d",&whs, &wms, &whe, &wme);

		scanf("%d:%d %d:%d",&mhs, &mms, &mhe, &mme);

		whs = whs*60 + wms;
		whe = whe*60 + wme;
		mhs = mhs*60 + mms;
		mhe = mhe*60 + mme;

		if(mhs > whe || mhe < whs)
			printf("Case %d: Hits Meeting\n",++cases);
		else
			printf("Case %d: Mrs Meeting\n",++cases);
	}
		return 0;
}