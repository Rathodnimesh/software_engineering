#include <iostream>
using namespace std;

class FoodOrder {
private:
    int orderId;
    string restaurantName;
    bool isDelivered;

public:
    // Constructor
    FoodOrder(int id, string restaurant) {
        orderId = id;
        restaurantName = restaurant;
        isDelivered = false;
    }

    // Member function
    void markDelivered() {
        isDelivered = true;
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Order has been delivered successfully!" << endl;
    }
};

int main() {
    FoodOrder order1(101, "Pizza Palace");
    order1.markDelivered();

    return 0;
}
