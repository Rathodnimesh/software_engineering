#include<stdio.h>
#include<conio.h>

int  main(){
	char team[10];
	
	printf("Enter your team name:");
	scanf("%s",team);
	
	if(strcmp(team,"gt")==0){
		printf("win the all serise");
	}
	
	else if(strcmp(team,"mi")==0){
		printf("Go mumbai indians");
	}
	
	else if (strcmp(team,"kkr")==0){
		printf("no win the match");
	}
	
	else if (strcmp(team,"rr")==0){
		printf("vaibhav shurvanshi ");
	}
	else{
		     printf(" Team not found");
	}
	return 0;
	
}
