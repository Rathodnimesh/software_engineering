#include <iostream>
using namespace std;

// Base class
class InstaStory {
protected:
    int storyViews;

public:
    // Constructor
    InstaStory(int views) {
        storyViews = views;
    }
};

// Derived class
class SponsoredStory : public InstaStory {
public:
    // Constructor
    SponsoredStory(int views) : InstaStory(views) {}

    // Function to display story views
    void displayViews() {
        cout << "Story Views: " << storyViews << endl;
    }
};

int main() {
    // Create object of SponsoredStory
    SponsoredStory story(2500);

    // Display story views
    story.displayViews();

    return 0;
}
