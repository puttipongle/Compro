#include <stdio.h>

struct Money{
	int bath;
};

int wallet();

int main(){
	struct Money p;
	p.bath = wallet();
	printf("Totalmoney : %d", p.bath);
	return 0;
}

int wallet(){
	int a = 20;
	a = a+30;
	return a;
}
