#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor
{
public:
    // Function 1: Payment without coupon
    void processPayment(float amount)
    {
        cout << "Method Called: processPayment(amount)" << endl;
        cout << "Final Amount = Rs. " << amount << endl;
    }

    // Function 2: Payment with coupon
    void processPayment(float amount, string couponCode)
    {
        float discount = 0;

        if (couponCode == "SAVE10")
            discount = amount * 0.10;   // 10% discount

        float finalAmount = amount - discount;

        cout << "\nMethod Called: processPayment(amount, couponCode)" << endl;
        cout << "Coupon Code : " << couponCode << endl;
        cout << "Discount    : Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount << endl;
    }
};

int main()
{
    PaymentProcessor payment;

    // Calling overloaded function without coupon
    payment.processPayment(1000);

    // Calling overloaded function with coupon
    payment.processPayment(1000, "SAVE10");

    return 0;
}
