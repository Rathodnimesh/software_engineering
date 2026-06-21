#include <stdio.h>
#include<conio.h>

float calculateFinalPrice(float price, float discountPercent, int isMember) {
    float discountAmount, finalPrice;

    // Base discount
    discountAmount = (price * discountPercent) / 100;
    finalPrice = price - discountAmount;

    // Extra 5% discount for members
    if (isMember) {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    return finalPrice;
}

int main() {
    float price, discount;
    int isMember;

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    float result = calculateFinalPrice(price, discount, isMember);

    printf("Final Price: %.2f\n", result);

    return 0;
}
