#include<stdio.h>
main(){
	int customers;
	printf("Find the needs of the target audience\n");
	printf("Choose social media\n");
	printf("Promote on social");
	do{
		printf("Do you have 1000 customers?\n");
		printf(" press 1: Yes, I have 1000 customers\n");
		printf(" press 2: No,I don't have 1000 customers\n");
		scanf("%d",&customers);
	}while(customers==2);
	printf("1000 customers");
	return 0;
	
}
