#include <stdio.h>

// Nested structure Bio
struct Bio {
    char description[100];
    int age;
};

// Main structure InstaProfile
struct InstaProfile {
    char username[50];
    int followers;
    struct Bio bio;   // nested structure
};

int main() {
    // Initialize structure
    struct InstaProfile user1 = {
        "nimesh_07", 
        1500, 
        {"Coding lover & tech enthusiast", 20}
    };

    // Display details
    printf("Instagram Profile:\n\n");
    printf("Username   : %s\n", user1.username);
    printf("Followers  : %d\n", user1.followers);
    printf("Bio        : %s\n", user1.bio.description);
    printf("Age        : %d\n", user1.bio.age);

    return 0;
}
