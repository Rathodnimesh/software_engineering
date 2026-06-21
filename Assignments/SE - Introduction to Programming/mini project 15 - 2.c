#include <stdio.h>

int main() {
    int minutes[7] = {0};  // Initialize all values to 0
    int choice, i;
    int total;
    float average;

    while (1) {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log listening minutes for 7 days\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                // Input minutes
                for (i = 0; i < 7; i++) {
                    printf("Enter minutes for Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }
                printf("Data saved successfully!\n");
                break;

            case 2:
                // Display summary
                total = 0;
                printf("\n--- Weekly Summary ---\n");

                for (i = 0; i < 7; i++) {
                    printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                    total += minutes[i];
                }

                average = total / 7.0;

                printf("\nTotal Minutes: %d\n", total);
                printf("Average Minutes per Day: %.2f\n", average);
                break;

            case 3:
                printf("Exiting program... Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
