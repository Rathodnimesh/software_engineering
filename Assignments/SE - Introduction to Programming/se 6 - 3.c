#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char songs[5][50] = {
        "Shape of You",
        "Believer",
        "Kesariya",
        "Blinding Lights",
        "Tum Hi Ho"
    };

    char guess[50];
    int randomIndex;

    // Seed random number generator
    srand(time(0));

    // Pick a random song
    randomIndex = rand() % 5;

    printf("?? Guess the Song Game ??\n");

    do {
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[randomIndex]) == 0) {
            printf("? Correct! You guessed the song!\n");
        } else {
            printf("? Wrong! Try again...\n");
        }

    } while (strcmp(guess, songs[randomIndex]) != 0);

    return 0;
}
