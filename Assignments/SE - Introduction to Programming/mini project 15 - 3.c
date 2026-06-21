#include <stdio.h>

int main() {
    FILE *file;          
    int minutes;

    file = fopen("music_log.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    printf("Enter listening minutes for today: ");
    scanf("%d", &minutes);

    fprintf(file, "Listening Minutes: %d\n", minutes);

    fclose(file);

    printf("Data saved successfully to music_log.txt\n");

    return 0;
}
