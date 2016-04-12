#include <stdio.h>
#include <string.h>

#define MAX 85
#define DELETE 'd'
#define SUBTITUTE 's'
#define INSERT 'i'


int mnm( int a, int b ){
	return (a < b ? a : b );
}

int min( int a,int b, int c ){
	return mnm(mnm(a,b), c);
}


int main(){
	int i,j;
	char s1[MAX],s2[MAX];
    int n, m;
    int Sub, Del, Ins;
    int d[MAX][MAX];
    char backtrace[MAX][MAX];
    int changes;
    char summary[MAX];
    int position[MAX];
    char operation[MAX];
    int k;
   int cases=0;

	while(1){
		if(gets(s1+1) == NULL)
			break;

		if(gets(s2+1) == NULL)
			break;
		m = strlen(s1+1);
		n = strlen(s2+1);


		if(cases != 0)
			printf("\n");

		cases=1;

		d[0][0] = 0;
		for(i=1;i<=m;i++){
			d[i][0] = i;
			backtrace[i][0] = 'd';
		}
		for(j=1;j<=n;j++){
			d[0][j] = j;
			backtrace[0][j] = 'i';

		}

		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				if(s1[i] != s2[j])
					Sub = d[i-1][j-1] + 1;
				else
					Sub = d[i-1][j-1];

				Del = d[i-1][j]+1;
				Ins = d[i][j-1]+1;

				d[i][j] = min(Del, Ins,Sub);

				if(d[i][j] == Ins)
					backtrace[i][j] = INSERT;
				else if(d[i][j] == Del)
					backtrace[i][j] = DELETE;
				else{
					if(s1[i] != s2[j]){
						backtrace[i][j] = SUBTITUTE;
					}else
						backtrace[i][j] = '0';
				}
			}
		}

		i = m;
		j = n;
		k = 0;

		printf("%d\n",d[i][j]);

		  while ( (i>0 || j>0) && d[i][j] > 0) {

		    if ( backtrace[i][j] == INSERT ) {
		    	summary[k] = s2[j];
		    	position[k] = i;
		    	operation[k] = INSERT;
		    	k++;

		      	j--;
		    }
		    else if ( backtrace[i][j] == DELETE ) {

		      position[k] = i;
		      operation[k] = DELETE;
		      k++;
		      i--;
		    }
		    else {

			if ( backtrace[i][j] == SUBTITUTE ){
				summary[k] = s2[j];
				position[k] = i;
				operation[k] = SUBTITUTE;
		    	k++;
			}
				i--;
				j--;
		    }

			}

			k--;
 			changes = 0;
 			j=1;
 			for(i=k;i>=0;i--){
				if(operation[i] == DELETE){
					printf("%d Delete %d\n",j,position[i]+changes);
					changes--;
				}else if (operation[i] == INSERT){
					changes++;
					printf("%d Insert %d,%c\n",j,position[i]+changes,summary[i]);
				}else if (operation[i] == SUBTITUTE){
					printf("%d Replace %d,%c\n",j,position[i]+changes,summary[i]);
				}
				j++;
			}

	}
return 0;
}