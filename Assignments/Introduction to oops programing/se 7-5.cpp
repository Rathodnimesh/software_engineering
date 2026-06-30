#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile("insta_followers.txt");
    string username;
    int count = 0;

    if (!infile) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    // Read each username and count it
    while (getline(infile, username)) {
        count++;
    }

    infile.close();

    cout << "Total number of followers: " << count << endl;

    return 0;
}
