#include <stdio.h>

// Function to format followers count
void formatFollowersCount(int count) {

    // If count is less than 1000
    if (count < 1000) {
        printf("%d", count);
    }

    // If count is between 1000 and 999999 ? K
    else if (count < 1000000) {
        float value = count / 1000.0;
        printf("%.1fK", value);
    }

    // If count is 1,000,000 or more ? M
    else {
        float value = count / 1000000.0;
        printf("%.1fM", value);
    }
}

int main() {
    int followers;

    printf("Enter followers count: ");
    scanf("%d", &followers);

    printf("Formatted: ");
    formatFollowersCount(followers);

    return 0;
}
