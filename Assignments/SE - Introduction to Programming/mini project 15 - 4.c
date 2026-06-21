#include <stdio.h>

int main() {
    FILE *file;
    int minutes;
    int total = 0, count = 0, highest = 0;

   
    file = fopen("music_log.txt", "r");

    
    if (file == NULL) {
        printf("No data found! Please log some music first.\n");
        return 1;
    }

    
    while (fscanf(file, "Listening Minutes: %d", &minutes) != EOF) {
        total += minutes;     
        count++;              

        // check for highest value
        if (minutes > highest) {
            highest = minutes;
        }
    }

    fclose(file);  // close file

    // Calculate average
    float average = (count > 0) ? (float)total / count : 0;

    // Print weekly report
    printf("\n--- Weekly Music Report ---\n");
    printf("Total Listening Minutes: %d\n", total);
    printf("Average Listening Minutes: %.2f\n", average);
    printf("Highest Listening Minutes: %d\n", highest);

    return 0;
}
