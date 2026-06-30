#include <iostream>
#include <string>
using namespace std;

// Structure to hold food order data
struct FoodOrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
private:
    int orderId;
    string restaurantName;
    bool isDelivered;

public:
    // Constructor that takes a FoodOrderData object
    FoodOrder(FoodOrderData order) {
        orderId = order.orderId;
        restaurantName = order.restaurantName;
        isDelivered = order.isDelivered;
    }

    // Display order details
    void displayOrder() {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant Name: " << restaurantName << endl;
        cout << "Delivery Status: "
             << (isDelivered ? "Delivered" : "Not Delivered") << endl;
    }
};

int main() {
    FoodOrderData order = {101, "Pizza Hut", true};
    FoodOrder food(order);

    // Display order details
    food.displayOrder();

    return 0;
}
