#include <stdio.h>

// Nested structure for Time
struct Time {
    int hours;
    int minutes;
};

// Main structure
struct MovieShow {
    char movie[50];
    int screen;
    struct Time showTime;   // nested structure
};

int main() {
    // Initialize structure
    struct MovieShow show1 = {"Avengers: Endgame", 3, {7, 30}};

    // Print details
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show1.movie,
           show1.screen,
           show1.showTime.hours,
           show1.showTime.minutes);

    return 0;
}
