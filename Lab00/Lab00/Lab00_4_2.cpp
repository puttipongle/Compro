#include<stdio.h>
main(){
	int Go;
	printf("Wake up, Shower, Eat Breakfast\n");
	printf("Dressed\n");
	printf("Wait go to university\n");
	do{
		printf("time to go to school?\n");
		printf("press 1: GOGO\n");
		printf("press 2: it not time\n");
		scanf("%d",&Go);
	}while(Go==2);
	printf("Go university");
	return 0;
}
