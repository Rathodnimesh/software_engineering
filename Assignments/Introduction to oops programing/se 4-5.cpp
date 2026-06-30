#include<iostream>
#include<string>
using namespace std;

// Base class
class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    SocialMediaUser(string u, int f) {
        username = u;
        followers = f;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

// Derived class 1
class YouTuber : public SocialMediaUser {
public:
    YouTuber(string u, int f) : SocialMediaUser(u, f) {}

    void uploadVideo(string title) {
        cout << username << " uploaded video: " << title << endl;
    }
};

// Derived class 2
class Podcaster : public SocialMediaUser {
public:
    Podcaster(string u, int f) : SocialMediaUser(u, f) {}

    void publishEpisode(string title) {
        cout << username << " published episode: " << title << endl;
    }
};

// Derived class 3 (Required)
class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string u, int f)
        : SocialMediaUser(u, f) {}

    void postStory(string storyTitle) {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    // Objects of different child classes
    YouTuber yt("nimesh_yt", 5000);
    Podcaster pc("nimesh_podcast", 3000);
    InstagramInfluencer ig("nimesh_insta", 7000);

    yt.displayProfile();
    yt.uploadVideo("C++ Tutorial");

    cout << endl;

    pc.displayProfile();
    pc.publishEpisode("OOP Concepts");

    cout << endl;

    ig.displayProfile();
    ig.postStory("My Daily Routine");

    return 0;
}
