#include <stdio.h>

int main() {
    FILE *fp;

    // Open file in append mode
    fp = fopen("playlist.txt", "a");

    // Check if file opened
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Add new songs
    fprintf(fp, "Perfect - Ed Sheeran\n");
    fprintf(fp, "Tum Hi Ho - Arijit Singh\n");

    // Close file
    fclose(fp);

    printf("Songs added successfully!");

    return 0;
    
}
