#include <stdio.h>
#include <conio.h>

int  main(){
	float price,total;
	int qty;
	
	printf("Enter your price:");
	scanf("%f",&price);
	
	
	printf("Enter your total:");
	scanf("%d",&qty);
	
	total=price*qty;
	printf("Total bill amount is %0.2f",total);
	
	return 0;
}
