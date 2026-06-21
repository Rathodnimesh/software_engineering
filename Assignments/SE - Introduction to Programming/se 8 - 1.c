#include <stdio.h>
#include <ctype.h>   // for toupper()

// Function to get initials
void getUserInitials(char name[], char initials[]) {
    int i = 0, j = 0;

    // First initial (first character)
    if (name[0] != '\0') {
        initials[j++] = toupper(name[0]);
    }

    // Find next words and take first letters
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            initials[j++] = toupper(name[i + 1]);
        }
    }

    initials[j] = '\0'; // end string
}

int main() {
    char name[] = "Virat Kohli";
    char initials[10];

    getUserInitials(name, initials);

    printf("Name: %s\n", name);
    printf("Initials: %s\n", initials);

    return 0;
}
