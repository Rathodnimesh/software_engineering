#include<stdio.h>
#include<conio.h>

int main(){
	int like,comments,share;
	
	printf("Enter your like:");
	scanf("%d",&like);
	
	printf("Enter your comments:");
	scanf("%d",&comments);
	
	printf("Enter your share:");
	scanf("%d",&share);
	
	if(like > 1000 ||(comments >200 && share >=50)){
		printf("post is trending");
	}
	else{
		printf("post is not trending");
	}
	return 0;
}
