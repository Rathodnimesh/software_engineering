#include <iostream>
#include <string>
using namespace std;

class Playlist {
private:
    string title;
    string createdBy;
    string songs[100];   // Array to store songs
    int songCount;       // Number of songs

public:
    // Constructor
    Playlist(string t, string c) {
        title = t;
        createdBy = c;
        songCount = 0;   // Initialize as empty
    }

    // Function to add a song
    void addSong(string songTitle) {
        if (songCount < 100) {
            songs[songCount] = songTitle;
            songCount++;
        } else {
            cout << "Playlist is full!" << endl;
        }
    }

    // Function to display playlist
    void displaySongs() {
        cout << "Playlist Title: " << title << endl;
        cout << "Created By: " << createdBy << endl;
        cout << "Songs List:" << endl;

        for (int i = 0; i < songCount; i++) {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main() {
    // Create Playlist object
    Playlist myPlaylist("My Favorite Songs", "Nimesh");

    // Add three songs
    myPlaylist.addSong("Shape of You");
    myPlaylist.addSong("Believer");
    myPlaylist.addSong("Perfect");

    // Display updated songs list
    myPlaylist.displaySongs();

    return 0;
}
