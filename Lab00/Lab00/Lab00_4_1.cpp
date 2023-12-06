#include<stdio.h>
main(){
	int Water;
	printf("Add Hotwater in MAMA \n");
	printf("wait boil 2 min\n");	
	
	do{
		printf("MAMA Cooked??\n");
		printf("press 1 :MAMA Cooked\n");
		printf("press 2 :MAMA not Cooked\n");
		scanf("%d",&Water);
	}while(Water==2);
	printf("Ready to EAT!!!");
	return 0;
}
