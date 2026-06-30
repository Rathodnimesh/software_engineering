#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    // Setter methods
    void setTitle(string t) {
        title = t;
    }

    void setArtist(string a) {
        artist = a;
    }

    // Getter methods
    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }
};

int main() {
    // Create Song object
    Song song;

    // Set initial values
    song.setTitle("Believer");
    song.setArtist("Imagine Dragons");

    // Display initial details
    cout << "Original Song Details:" << endl;
    cout << "Title: " << song.getTitle() << endl;
    cout << "Artist: " << song.getArtist() << endl;

    // Update the title
    song.setTitle("Thunder");

    // Display updated details
    cout << "\nAfter Updating Title:" << endl;
    cout << "Title: " << song.getTitle() << endl;
    cout << "Artist: " << song.getArtist() << endl;

    return 0;
}
