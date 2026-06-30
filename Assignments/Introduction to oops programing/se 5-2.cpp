#include <iostream>
using namespace std;

// Base Class
class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading content to social media..." << endl;
    }
};

// Derived Class 1
class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout << "Uploading photo/reel to Instagram with filters and hashtags." << endl;
    }
};

// Derived Class 2
class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout << "Uploading HD video to YouTube with title, thumbnail, and description." << endl;
    }
};

int main()
{
    // Base class pointer
    SocialMediaUploader *obj;

    InstagramUploader instagram;
    YouTubeUploader youtube;

    obj = &instagram;
    obj->uploadContent();

    obj = &youtube;
    obj->uploadContent();

    return 0;
}
