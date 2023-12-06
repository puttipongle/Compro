#include <stdio.h>

struct totalNumber{
	int number;
};

int t_number(struct totalNumber *total);

int main(){
	struct totalNumber t;
	t_number(&t);
	printf("%d", t.number);
}

int t_number(struct totalNumber *total){
	struct totalNumber totalnum;
	totalnum = *total;
	totalnum.number = 100;
	*total = totalnum;
}
