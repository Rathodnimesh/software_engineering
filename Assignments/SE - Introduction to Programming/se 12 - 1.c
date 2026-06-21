#include <stdio.h>
#include <string.h>


struct Playlist {
    char title[50];
    char artist[50];
    int duration; // in seconds
};

int main() {
    // Initialize structure variable
    struct Playlist song1 = {"Shape of You", "Ed Sheeran", 240};

    // Print details
    printf("Song Details:\n\n");
    printf("Title    : %s\n", song1.title);
    printf("Artist   : %s\n", song1.artist);
    printf("Duration : %d seconds\n", song1.duration);

    return 0;
}
