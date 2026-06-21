#include <stdio.h>
#include <stdlib.h>

#define MAX_DAYS 7

int main() {
    int choice;
    int minutes[MAX_DAYS] = {0};   // array to store weekly data
    int count = 0;
    FILE *file;

    do {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Report\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (count >= MAX_DAYS) {
                printf("Week full! Please reset data.\n");
                break;
            }

            printf("Enter minutes: ");
            scanf("%d", &minutes[count]);

            // Save to file
            file = fopen("music_log.txt", "a");
            if (file != NULL) {
                fprintf(file, "Listening Minutes: %d\n", minutes[count]);
                fclose(file);
            }

            count++;
            printf("Data saved!\n");
            break;

        case 2: {
            int total = 0, highest = 0;
            float average;

            if (count == 0) {
                printf("No data available!\n");
                break;
            }

            for (int i = 0; i < count; i++) {
                total += minutes[i];
                if (minutes[i] > highest) {
                    highest = minutes[i];
                }
            }

            average = (float)total / count;

            printf("\n--- Weekly Report ---\n");
            printf("Total: %d\n", total);
            printf("Average: %.2f\n", average);
            printf("Highest: %d\n", highest);
            break;
        }

        case 3: {
            char confirm;

            printf("Are you sure you want to reset all data? (y/n): ");
            scanf(" %c", &confirm);

            if (confirm == 'y' || confirm == 'Y') {

                // Clear array
                for (int i = 0; i < MAX_DAYS; i++) {
                    minutes[i] = 0;
                }
                count = 0;

                // Clear file contents
                file = fopen("music_log.txt", "w"); // overwrite mode
                if (file != NULL) {
                    fclose(file);
                }

                printf("All data has been reset successfully.\n");
            } else {
                printf("Reset cancelled.\n");
            }
            break;
        }

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
