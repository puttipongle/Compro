#include <stdio.h>

struct Distance{
	int feet;
};

int main(){
	Distance *a , d;	
	a = &d;
	printf("Enter your feet : ");
	scanf("%d",&d.feet);
	printf("Feet: %d", d.feet);
	return 0;
}
