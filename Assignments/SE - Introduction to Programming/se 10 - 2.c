#include <stdio.h>
#include <string.h>

int main() {
    char user1[50], user2[50];

    printf("Enter first username: ");
    fgets(user1, sizeof(user1), stdin);

    printf("Enter second username: ");
    fgets(user2, sizeof(user2), stdin);

    // Remove newline characters
    user1[strcspn(user1, "\n")] = 0;
    user2[strcspn(user2, "\n")] = 0;

    // Compare usernames
    if (strcmp(user1, user2) == 0) {
        printf("Usernames are the SAME ?\n");
    } else {
        printf("Usernames are DIFFERENT ?\n");
    }

    return 0;
}
