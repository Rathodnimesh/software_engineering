#include <iostream>
using namespace std;

// Base Class
class MusicPlayer
{
public:
    virtual void play(string song)
    {
        cout << "Playing: " << song << endl;
    }
};

// Derived Class
class SpotifyPlayer : public MusicPlayer
{
public:
    void play(string song) override
    {
        cout << "Streaming on Spotify: " << song << endl;
    }
};

int main()
{
    // Base class pointer pointing to derived class object
    MusicPlayer *player = new SpotifyPlayer();

    // Runtime Polymorphism
    player->play("Shape of You");

    delete player;
    return 0;
}
