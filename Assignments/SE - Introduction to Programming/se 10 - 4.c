#include <stdio.h>
#include <string.h>

int main() {
    char fullName[50];
    char username[50];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove newline
    fullName[strcspn(fullName, "\n")] = 0;

    // Check length
    if (strlen(fullName) < 5) {
        // If less than 5, copy full name
        strcpy(username, fullName);
    } else {
        // Copy first 5 characters
        strncpy(username, fullName, 5);
        username[5] = '\0'; // null terminate
    }

    printf("Generated Username: %s\n", username);

    return 0;
}
