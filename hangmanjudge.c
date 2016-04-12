#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# define NO_OF_CHARS 256
# define bool int

char *removeDups(char *str){
  bool bin_hash[NO_OF_CHARS] = {0};
  int ip_ind = 0, res_ind = 0;
  char temp;

  while(*(str + ip_ind))
  {
    temp = *(str + ip_ind);
    if(bin_hash[temp] == 0)
    {
        bin_hash[temp] = 1;
        *(str + res_ind) = *(str + ip_ind);
        res_ind++;
    }
    ip_ind++;
  }

  *(str+res_ind) = '\0';

  return str;
}

int main(){
	int r,i,notfound, found;
	char word[NO_OF_CHARS], guess[NO_OF_CHARS], tempw[NO_OF_CHARS], tempg[NO_OF_CHARS];
	int w,g;

	while(scanf("%d",&r) && r != -1){
		printf("Round %d\n",r);

		scanf("%s\n%s",word,guess);

		strcpy(tempw,removeDups(word));
		strcpy(tempg,removeDups(guess));

		w = strlen(tempw);
		g = strlen(tempg);
		notfound = 0;
		found = 0;

		if(g<w)
			printf("You chickened out.\n");
		else{

		for(i=0;i<g;i++){

			if(strchr(tempw,tempg[i]) == NULL){
				notfound++;
				if(notfound == 7)
					break;
			}else{
				found++;
				if(found == w)
					break;
			}
		}

		if(found == w)
			printf("You win.\n");
		else{
			if(notfound < 7)
				printf("You chickened out.\n");
			else
				printf("You lose.\n");
		}
	}

	}
return 0;
}