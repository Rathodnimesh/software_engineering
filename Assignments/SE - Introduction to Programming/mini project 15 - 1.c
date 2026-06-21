#include <stdio.h>
#include <conio.h>

int main() {
    int minutes[7];   
    int i;
    int total = 0;
    float average;

    
    for (i = 0; i < 7; i++) {
        printf("Enter minutes listened on Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    // Display daily data
    printf("\nMusic Listening Summary:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
        total += minutes[i]; 
    }

    //  average
    average = total / 7.0;

    
    printf("\nTotal Minutes: %d\n", total);
    printf("Average Minutes per Day: %.2f\n", average);

    return 0;
}
