#include <stdio.h>

// Pass by Value
void increaseFollowersByValue(int followers) {
    followers = followers + 1000;
    printf("Inside increaseFollowersByValue: %d\n", followers);
}

// Pass by Reference (using pointer)
void increaseFollowersByReference(int *followers) {
    *followers = *followers + 1000;
    printf("Inside increaseFollowersByReference: %d\n", *followers);
}

int main() {
    int followers = 5000;

    printf("Original followers: %d\n", followers);

    // Call by Value
    increaseFollowersByValue(followers);
    printf("After increaseFollowersByValue: %d\n", followers);

    // Call by Reference
    increaseFollowersByReference(&followers);
    printf("After increaseFollowersByReference: %d\n", followers);

    return 0;
}
