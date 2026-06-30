#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outfile("my_fav_songs.txt", ios::app); // Open file in append mode
    string song;

    if (!outfile) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    cout << "Enter a new song name: ";
    getline(cin, song);

    outfile << song << endl; // Append the new song

    outfile.close();

    cout << "Song added successfully!" << endl;

    return 0;
}
