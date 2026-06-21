#include <stdio.h>

int main() {
    // Declare and initialize array
    int dailySteps[7] = {5000, 7200, 6500, 8000, 9000, 7500, 6800};

    // Print values using loop
    printf("Daily Step Count:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}
