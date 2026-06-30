#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outfile("wishlist.txt");

    if (!outfile) {
        cout << "Error: Could not create file!" << endl;
        return 1;
    }

    string product;
    float price;

    cout << "Enter details of 3 products:\n";

    for (int i = 1; i <= 3; i++) {
        cin.ignore(i == 1 ? 0 : 1, '\n');

        cout << "\nEnter product " << i << " name: ";
        getline(cin, product);

        cout << "Enter price: ";
        cin >> price;

        outfile << product << "," << price << endl;
    }

    outfile.close();

    // Read from file
    ifstream infile("wishlist.txt");

    if (!infile) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    string line;

    cout << "\n----- Wishlist -----\n";
    while (getline(infile, line)) {
        int pos = line.find(',');
        string productName = line.substr(0, pos);
        string productPrice = line.substr(pos + 1);

        cout << "Product: " << productName
             << " | Price: ?" << productPrice << endl;
    }

    infile.close();

    return 0;
}
