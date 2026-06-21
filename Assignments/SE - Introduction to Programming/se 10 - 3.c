#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Flipkart";
    char shoppingApp[20];  // enough space

    // Copy string
    strcpy(shoppingApp, source);

    // Print result
    printf("Shopping App: %s\n", shoppingApp);

    return 0;
}
