#include <stdio.h>
#include<conio.h>
int main() {
	
    float study_hours[7];
    float total_hours=0.0;
    float average_hours=0.0;
    int max_day = 1;
    int i;
    int j;
    
    printf("=== Weekly Study Hours Analyser ===\n\n");
       for (i=0;i<7;i++) {
        while(1) {
            printf("Enter study hours for Day %d:",i +1);
            scanf("%f",&study_hours[i]);
            
            if (study_hours[i]>=0.0&&study_hours[i]<=24.0) {
                break; 
            } else {
                printf("Invalid input! Hours must be between 0 and 24. Please try again.\n");
            }
        }
           total_hours+=study_hours[i];
        if (study_hours[i]>study_hours[max_day-1]) {
            max_day = i + 1;
    }
    }
      average_hours = total_hours / 7.0;
    
    printf("\n--- Performance Summary ---\n");
    printf("Weekly Total Hours: %.2f hours\n",total_hours);
    printf("Daily Average:      %.2f hours\n",average_hours);
    printf("Highest Study Day:  Day %d (%.2f hours)\n",max_day,study_hours[max_day - 1]);
    printf("\n--- Visual Progress Chart ---\n");
    for (i=0;i<7;i++) {
        printf("Day %d:",i+1);
        int asterisks_count=(int)study_hours[i]; 
        for(j=0;j<asterisks_count;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
