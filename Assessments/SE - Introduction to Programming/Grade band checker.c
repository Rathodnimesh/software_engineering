#include<stdio.h>
#include<conio.h>
int main(){
	int mark;
	
	printf("enter a mark:");
	scanf("\n%d",&mark);
	if (mark > 100 || mark < 0) {
        printf("Please enter a value between 0 and 100.\n");
    }
else if(mark>=90){
		printf("A grade");
	
	}
	else if(mark>=75){
	printf("B Grade");
	printf("good work");
	}
	else if(mark>=60){
		printf("C grade");
	}
	else if(mark>=45){
		printf("D grade");
	}
	else {
		printf("fail");
	}
	
	return 0;
}
