#include<stdio.h>
#include<conio.h>

int main(){
    int r,c,k;
    
    for(r=1;r<=5;r++){ //rows print
        for(c=1;c<=5-r;c++){
            printf(" ");    //space print
        }
        for(k=1; k<=r;k++){ //star print
        printf("* ");
    }
    printf("\n");
  }
  return 0;
}
