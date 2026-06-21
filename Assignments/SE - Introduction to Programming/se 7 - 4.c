#include<stdio.h>
#include<conio.h>

int main(){
	int i,j;
	int n=5;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i+j)%2==0)
			printf("0");
			else
			printf("1");
		}
		printf("\n");
	}
	
}
