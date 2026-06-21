#include<stdio.h>
#include<conio.h>

int main(){
	int age;
	float totalorder;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your total order:");
	scanf("%f",&totalorder);
	
	if( age>=18 &&  totalorder>500){
		printf("Eilgible for offer");
	}
	else{
		printf("Not eilgible for offer");
	}
	
	return 0;
	
}
