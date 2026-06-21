#include<stdio.h>
#include<conio.h>

// Function to swap values using pointers
void swapPlaylistCounts(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int playlist1 = 25;   
    int playlist2 = 40;   

    printf("Before swapping:\n");
    printf("Playlist1 songs: %d\n", playlist1);
    printf("Playlist2 songs: %d\n", playlist2);

    // Function call (passing addresses)
    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter swapping:\n");
    printf("Playlist1 songs: %d\n", playlist1);
    printf("Playlist2 songs: %d\n", playlist2);

    return 0;
}
