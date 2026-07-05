#include<stdio.h>
#include<conio.h>
char name[50];
int rollno;
float mark;
char grade;	

void assignGrade(){
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

}

int main(){
	
printf("Enter a name: ");
    scanf(" %[^\n]s", name); // Safely reads a full line including spaces
    printf("Your name is: %s\n", name);
	
		
	printf("enter a rollno:");
	scanf("%d",&rollno);
	printf("your rollno is:%d\n",rollno);
	
	printf("enter a mark:");
	scanf("%d",&mark);
	printf("your mark is:%d\n",mark);
	
	printf("enter a grade:");
	scanf("%d",&grade);
	printf("your grade is:%s\n",grade);
	
	
	
	return 0;
}
