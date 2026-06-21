#include<stdio.h>
#include<stdio.h>

int main(){
    int r,c,k,n;
    
    printf("Enter your  rows:");
    scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        //space
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
        //star
        for(k=1; k<=r;k++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
