#include <stdio.h>
#include<conio.h>

int main() {
    int a[10], i,j,temp;
    int max, min;
    float sum = 0, mean;

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // Find maximum and minimum
    max = min = a[0];
    for (i = 1; i < 10; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    // Calculate mean
    mean = sum / 10;

    // Sort array (Bubble Sort)
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display results
    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Mean = %.2f\n", mean);

    printf("Sorted Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    // Check whether mean is closer to min or max
    if ((mean - min) < (max - mean))
        printf("\nMean is closer to the minimum.\n");
    else if ((mean - min) > (max - mean))
        printf("\nMean is closer to the maximum.\n");
    else
        printf("\nMean is exactly midway between minimum and maximum.\n");

    return 0;
}
