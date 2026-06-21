#include<stdio.h>
#include<conio.h>

int  main(){
	int age;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age >= 18){
		printf("Eligible for driving lincence:");
	}
	else if(age >=21){
		printf("Eligible for  credit:");
	}
	else if (age >=25) {
		printf("Eligible for car rentel:");
	}
	
	else{
		printf("byy");
	}
	return 0;

	
}
