#include<stdio.h>
#include<conio.h>

struct fooditem{
	char itemname[50];
	float price;
	float rating;
};

int main(){
	struct fooditem menu[3]={
		{"coco cola",299.99,2.5},
		{" cold coffe",399.99,3.5},
		{" mango shake",499.99,4.5}
	};
	
	int i;
	printf("\nmenu");
	for(i=0;i<3;i++){
		printf("Item %d:\n",i+1);
		printf("name:%s \n",menu[i].itemname);
		printf("price:%0.2f\n",menu[i].price);
		printf("rating:%0.1f\n\n",menu[i].rating);
	}
	return 0;
}
