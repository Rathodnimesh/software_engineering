#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open file in read mode
    fp = fopen("playlist.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    printf("Playlist Songs:\n\n");

    // Read and print each line
    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close file
    fclose(fp);

    return 0;
}
