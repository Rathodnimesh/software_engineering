#include <stdio.h>
#include <conio.h>

int main() {
    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5},  
        {5, 4, 4, 5, 3},  
        {3, 4, 5, 4, 4}   
    };

        int i;
    printf("Ratings for Playlist 2:\n");

    for ( i = 0; i < 5; i++) {
        printf("Day %d: %d\n", i + 1, playlistRatings[1][i]);
    }

    return 0;
}
