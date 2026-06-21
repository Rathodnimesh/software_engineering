#include <stdio.h>
#include <string.h>

// Function to format price
void formatPrice(int price, char result[]) {
    char temp[20];
    int i, j = 0, len;

    sprintf(temp, "%d", price); // convert int to string
    len = strlen(temp);

    result[j++] = '?';  // add rupee symbol

    int count = 0;

    // Process digits from right to left
    for (i = len - 1; i >= 0; i--) {
        result[j++] = temp[i];
        count++;

        // Add comma after 3 digits, then every 2 digits
        if ((count == 3 || (count > 3 && (count - 3) % 2 == 0)) && i != 0) {
            result[j++] = ',';
        }
    }

    result[j] = '\0';

    // Reverse result
    for (i = 1; i < j / 2 + 1; i++) {
        char t = result[i];
        result[i] = result[j - i];
        result[j - i] = t;
    }
}

int main() {
    int price1 = 1599, price2 = 49999, price3 = 120000;
    char formatted[30];

    formatPrice(price1, formatted);
    printf("Product 1 Price: %s\n", formatted);

    formatPrice(price2, formatted);
    printf("Product 2 Price: %s\n", formatted);

    formatPrice(price3, formatted);
    printf("Product 3 Price: %s\n", formatted);

    return 0;
}
