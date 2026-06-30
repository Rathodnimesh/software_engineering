#include <iostream>
#include <string>
using namespace std;

class UserProfile {
private:
    string phoneNumber;   // Private property

public:
    // Setter method
    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }

    // Getter method
    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    // Create object
    UserProfile user;

    // Set phone number using setter
    user.setPhoneNumber("9876543210");

    // Retrieve phone number using getter
    cout << "Phone Number: " << user.getPhoneNumber() << endl;

    return 0;
}
