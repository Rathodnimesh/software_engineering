#include<stdio.h>
#include<conio.h>

int main(){
    int likes = 100;     
    int *ptrLikes;       
    
    ptrLikes = &likes;   
    
    // Print value using variable
    printf("Value of likes: %d\n", likes);
    
    // Print value using pointer
    printf("Value using pointer: %d\n", *ptrLikes);
    
    // Print address stored in pointer
    printf("Address stored in ptrLikes: %p\n", ptrLikes);
    
    return 0;
}
