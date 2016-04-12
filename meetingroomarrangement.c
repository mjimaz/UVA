#include <stdio.h>
#include <stdlib.h>

#define MAX 25

struct meeting{
	int start;
	int finish;
};

int cmpfunc(const void *va, const void *vb){
	const struct meeting *ia = va;
	const struct meeting *ib = vb;

	if ((*ia).finish < (*ib).finish) return -1;
	else if ((*ia).finish > (*ib).finish) return +1;
	else return 0;
}

int main(){
	int n, s, f, i, m, j, k;
	int events;
	struct meeting * room = (struct meeting*) malloc(sizeof(struct meeting) * MAX);
	struct meeting * temp = (struct meeting*) malloc(sizeof(struct meeting) * MAX);

	scanf("%d",&n);
	while(1){
		i = 0;
		if(n == 0)
			break;

		while(1){
			scanf("%d %d",&s, &f);

			if(s == 0 && f == 0)
				break;

			room[i].start = s;
			room[i].finish = f;
			i++;
		}

		qsort(room, i, sizeof(struct meeting), cmpfunc);

		temp[0].start = room[0].start;
		temp[0].finish = room[0].finish;

		events = 1;

		for(j = 1; j<i;j++)
			if(room[j].start >= temp[events-1].finish){
				temp[events].start = room[j].start;
				temp[events].finish = room[j].finish;
				events++;
			}
		printf("%d\n",events);

		n--;
	}
	return 0;
}