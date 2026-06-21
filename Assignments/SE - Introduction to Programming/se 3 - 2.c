#include<stdio.h>
#include<conio.h>

void main(){
	const float gst_rate = 18;
	float base_price,gst_amount, final_price;
	
	printf("Enter your base price:");
	scanf("%f",&base_price);
	
	gst_amount= (base_price* gst_rate)/100;
	final_price=base_price + gst_amount;
	
	
	
	printf("Gst amount =%.2f\n",gst_amount);
	printf("final price (including gst)=%2.f\n",final_price);
}
