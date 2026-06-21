#include <stdio.h>
#include <string.h>

// Function to add product to cart
void addToCart(char cart[][50], int *count, char product[]) {
    strcpy(cart[*count], product);  // add product
    (*count)++;                     // increase count

    printf("\nCart after adding item:\n");
    for (int i = 0; i < *count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main() {
    char cart[10][50];  // cart can hold 10 products
    int count = 0;

    // Add items
    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Headphones");
    addToCart(cart, &count, "Smartphone");

    printf("\nFinal Cart in main():\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}
