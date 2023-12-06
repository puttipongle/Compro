#include <stdio.h>

struct books{
	char name[20];
	int cost;
};

typedef struct books bs; 
int main(){
	struct books A;
	bs B;
	A.cost = 100;
	B.cost = 75;
	printf("%d %d", A.cost, B.cost);
	return 0;
}
