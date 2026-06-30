#include <iostream>
using namespace std;

// Abstract Base Class
class Product {
public:
    // Pure virtual function
    virtual void upload() = 0;
};

// Derived class: Electronics
class Electronics : public Product {
public:
    void upload() override {
        cout << "Uploading Electronics product details to Flipkart..." << endl;
    }
};

// Derived class: Clothing
class Clothing : public Product {
public:
    void upload() override {
        cout << "Uploading Clothing product details to Flipkart..." << endl;
    }
};

int main() {
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();

    return 0;
}
