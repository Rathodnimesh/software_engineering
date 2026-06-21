#include <stdio.h>
#include <ctype.h>

// Generic reusable function
void capitalizeFirstLetter(char str[]) {
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}

int main() {
    // Example 1: Product name
    char product[] = "laptop";
    capitalizeFirstLetter(product);
    printf("Product Name: %s\n", product);

    // Example 2: Username
    char username[] = "nimesh";
    capitalizeFirstLetter(username);
    printf("Username: %s\n", username);

    // Example 3: Any string
    char text[] = "hello world";
    capitalizeFirstLetter(text);
    printf("Text: %s\n", text);

    return 0;
}
