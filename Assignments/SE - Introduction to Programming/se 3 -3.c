#include <stdio.h>
#include <conio.h>

int main() {
    char playlistName[50] = "Chill Vibes";
    int totalSongs = 25;
    float avgDuration = 3.75;

    printf("My favorite Spotify playlist is \"%s\" which has %d songs with an average duration of %.2f minutes.\n",
           playlistName, totalSongs, avgDuration);

    return 0;
}
