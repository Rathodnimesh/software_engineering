#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile("my_fav_songs.txt");
    string song;

    if (!infile) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    cout << "Songs in the file:" << endl;

    while (getline(infile, song)) {
        cout << song << endl;
    }

    infile.close();

    return 0;
}
