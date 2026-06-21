#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char teams[10][50] = {
        "Mumbai Indians",
        "Chennai Super Kings",
        "Royal Challengers Bangalore"
    };
    int count = 3; // initial 3 teams

    while (1) {
        printf("\n--- IPL Teams Menu ---\n");
        printf("1. View Favorite Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour Favorite IPL Teams:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, teams[i]);
                }
                break;

            case 2:
                if (count < 10) {
                    printf("Enter new team name: ");
                    scanf(" %[^\n]", teams[count]); // read full line
                    count++;
                    printf("Team added successfully!\n");
                } else {
                    printf("Team list is full!\n");
                }
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
