#include <stdio.h>
#include <conio.h>
float calculateAverage(int arr[], int size) {
    int sum = 0;
    int i; 

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (float)sum / size;
}

int main() {
    int dailyOrders[7] = {250, 300, 150, 400, 350, 200, 280};

    float avg = calculateAverage(dailyOrders, 7);

    printf("Average weekly spend: %.2f\n", avg);

    return 0;
}
