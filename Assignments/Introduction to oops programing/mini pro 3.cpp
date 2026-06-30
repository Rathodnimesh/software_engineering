#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayContentList() {
    ifstream infile("content.txt");

    if (!infile) {
        cout << "Error: Could not open file!" << endl;
        return;
    }

    string line;
    int count = 1;

    cout << "\n----- Content List -----\n";

    while (getline(infile, line)) {
        int pos1 = line.find(',');
        int pos2 = line.find(',', pos1 + 1);

        string title = line.substr(0, pos1);
        string platform = line.substr(pos1 + 1, pos2 - pos1 - 1);

        cout << count << ". " << title
             << " (" << platform << ")" << endl;

        count++;
    }

    infile.close();

    if (count == 1) {
        cout << "No content found in the file." << endl;
    }
}

int main() {
    displayContentList();
    return 0;
}
