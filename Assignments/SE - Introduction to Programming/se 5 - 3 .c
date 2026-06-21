#include<stdio.h>
#include<conio.h>

int main(){
	 float amount , finalamount;
	
	
	printf("Enter total cart amount:");
	scanf("%f",&amount);
	
	if(amount > 2000){
		finalamount = amount-(amount*0.20);
	}
	else if (amount > 1000){
		finalamount = amount-(amount*0.10);
	}
	else{
		finalamount = amount;
	} 
	printf("final amount to pay : %.2f",finalamount);
 
     return 0;

}

