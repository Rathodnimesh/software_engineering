#include <iostream>
using namespace std;

class Playlist {
private:
    string name;
    bool isPublic;

public:
    // Constructor
    Playlist(string n, bool p) {
        name = n;
        isPublic = p;
    }

    // Toggle the visibility
    void togglePublic() {
        isPublic = !isPublic;
    }

    // Display playlist details
    void display() {
        cout << "Playlist: " << name << endl;
        cout << "Visibility: " << (isPublic ? "Public" : "Private") << endl;
        cout << endl;
    }
};

int main() {
    Playlist p1("My Favorite Songs", true);

    cout << "Initial Status:" << endl;
    p1.display();

    // First toggle
    p1.togglePublic();
    cout << "After First Toggle:" << endl;
    p1.display();

    // Second toggle
    p1.togglePublic();
    cout << "After Second Toggle:" << endl;
    p1.display();

    return 0;
}
