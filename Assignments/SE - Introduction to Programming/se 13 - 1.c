#include <stdio.h>
#include<conio.h>

int main() {
    FILE *fp;

    // Open file in write mode
    fp = fopen("playlist.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Write songs to file
    fprintf(fp, "Shape of You - Ed Sheeran\n");
    fprintf(fp, "Kesariya - Arijit Singh\n");
    fprintf(fp, "Blinding Lights - The Weeknd\n");

    // Close file
    fclose(fp);

    printf("Songs written successfully to playlist.txt");

    return 0;
}
