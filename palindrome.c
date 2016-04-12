#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char word[25];
	int length,i, palindrome, reverse;
	int t1,t2;

	while(scanf("%s",&word) != EOF){
		length = strlen(word);
		palindrome = 1;
		reverse = 1;

		if(length == 1){
			t1 = (int)(word[0]);
			reverse = 0;
			if(t1 == 65||t1 == 72||t1 == 73 || t1 == 77 || t1 == 79 || t1 == 84 || t1 == 85|| t1 == 86|| t1 == 87||t1==88||t1==89||t1==49||t1==56)
					reverse = 1;
		}else{

		for(i=0;i<length/2;i++){
			t1 = (int)(word[i]);
			t2 = (int)(word[length-i-1]);

			if(palindrome == 1 && t1 != t2){
				palindrome = 0;
			}

			if(reverse == 1){
			if(t1 == 66||t1 == 67||t1 == 68 || t1 == 70 || t1 == 71 || t1 == 75 || t1 == 78 || t1 == 80|| t1 == 81|| t1 == 82||t1==52||t1==54||t1==55||t1==57||  t2 == 66||t2 == 67||t2 == 68 || t2== 70 || t2 == 71 || t2 == 75 || t2 == 78 || t2 == 80|| t2 == 81|| t2 == 82||t2==52||t2==54||t2==55||t2==57){
				reverse = 0;
			}else{
				if((t1 == 65 && t2 != 65) || (t2 == 65 && t1 != 65))
					reverse = 0;
				else if((t1 == 69 && t2 != 51) || (t2 == 69 && t1 != 51))
					reverse=0;
				else if((t1 == 72 && t2 != 72) || (t2 == 72 && t1 != 72))
					reverse =0;
				else if((t1 == 73 && t2 != 73) || (t2 == 73 && t1 != 73))
					reverse =0;
				else if((t1 == 74 && t2 != 76) || (t2 == 74 && t1 != 76))
					reverse =0;
				else if((t1 == 77 && t2 != 77) || (t2 == 77 && t1 != 77))
					reverse =0;
				else if((t1 == 79 && t2 != 79) || (t2 == 79 && t1 != 79))
					reverse =0;
				else if((t1 == 83 && t2 != 50) || (t2 == 83 && t1 != 50))
					reverse =0;
				else if((t1 == 84 && t2 != 84) || (t2 == 84 && t1 != 84))
					reverse =0;
				else if((t1 == 85 && t2 != 85) || (t2 == 85 && t1 != 85))
					reverse =0;
				else if((t1 == 86 && t2 != 86) || (t2 == 86 && t1 != 86))
					reverse =0;
				else if((t1 == 87 && t2 != 87) || (t2 == 87 && t1 != 87))
					reverse =0;
				else if((t1 == 88 && t2 != 88) || (t2 == 88 && t1 != 88))
					reverse =0;
				else if((t1 == 89 && t2 != 89) || (t2 == 89 && t1 != 89))
					reverse =0;
				else if((t1 == 90 && t2 != 53) || (t2 == 90 && t1 != 53))
					reverse =0;
				else if((t1 == 49 && t2 != 49) || (t2 == 49 && t1 != 49))
					reverse =0;
				else if((t1 == 50 && t2 != 83) || (t2 == 50 && t1 != 83))
					reverse =0;
				else if((t1 == 51 && t2 != 69) || (t2 == 51 && t1 != 69))
					reverse=0;
				else if((t1 == 53 && t2 != 90) || (t2 == 53 && t1 != 90))
					reverse =0;
				else if((t1 == 56 && t2 != 56) || (t2 == 56 && t1 != 56))
					reverse =0;
			}
			}
			if(palindrome == 0 && reverse == 0)
				break;
		}
	}
		if(palindrome == 0){
			if(reverse == 0)
				printf("%s -- is not a palindrome.\n\n",word);
			else
				printf("%s -- is a mirrored string.\n\n",word);
		}else{
			if(reverse == 0)
				printf("%s -- is a regular palindrome.\n\n",word);
			else
				printf("%s -- is a mirrored palindrome.\n\n",word);
		}
	}
	return 0;
}