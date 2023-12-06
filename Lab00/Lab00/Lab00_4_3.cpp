#include<stdio.h>
main(){
	int item;
	printf("Prepare your wallet, cloth bag\n");
	do{
		printf("Did you forget something?\n");
		printf(" press 1:No i ready!!\n");
		printf(" press 2:Yes i forgot someting\n");
		scanf("%d",&item);
	}while(item==2);
	printf("Go to motorcycle\n");
	printf("Go to market");
	return 0;
}
