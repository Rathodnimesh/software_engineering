#include <stdio.h>
#include <string.h>

#define SUBJECTS 3
#define DAYS 7

struct StudyLog
{
    char subject[40];
    float hours[DAYS];
};

void calculateReport(struct StudyLog logs[])
{
    int i, j;
    float total, average;

    printf("\n========== Weekly Study Report ==========\n");

    for (i = 0; i < SUBJECTS; i++)
    {
        total = 0;

        for (j = 0; j < DAYS; j++)
        {
            total += logs[i].hours[j];
        }

        average = total / DAYS;

        printf("\nSubject : %s\n", logs[i].subject);
        printf("Weekly Total Hours : %.2f\n", total);
        printf("Daily Average      : %.2f\n", average);

        printf("Progress Chart:\n");

        for (j = 0; j < DAYS; j++)
        {
            int k;
            printf("Day %d : ", j + 1);

            for (k = 0; k < (int)logs[i].hours[j]; k++)
            {
                printf("* ");
                /* Use printf("• "); if your compiler supports Unicode */
            }

            printf("(%.1f hrs)\n", logs[i].hours[j]);
        }
    }
}

int main()
{
    struct StudyLog logs[SUBJECTS];

    strcpy(logs[0].subject, "Mathematics");
    strcpy(logs[1].subject, "Science");
    strcpy(logs[2].subject, "English");

    int i, j;

    for (i = 0; i < SUBJECTS; i++)
    {
        for (j = 0; j < DAYS; j++)
        {
            logs[i].hours[j] = 0;
        }
    }

    int choice, day;
    FILE *fp;

    do
    {
        printf("\n========== Student Productivity Tracker ==========\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Enter Day Number (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7)
            {
                printf("Invalid day!\n");
                break;
            }

            printf("\nEnter study hours:\n");

            for (i = 0; i < SUBJECTS; i++)
            {
                printf("%s: ", logs[i].subject);
                scanf("%f", &logs[i].hours[day - 1]);
            }

            printf("Study hours saved successfully!\n");
            break;

        case 2:
            calculateReport(logs);
            break;

        case 3:

            fp = fopen("productivity_log.txt", "w");

            if (fp == NULL)
            {
                printf("Error opening file!\n");
                return 1;
            }

            for (i = 0; i < SUBJECTS; i++)
            {
                fprintf(fp, "%s", logs[i].subject);

                for (j = 0; j < DAYS; j++)
                {
                    fprintf(fp, ",%.1f", logs[i].hours[j]);
                }

                fprintf(fp, "\n");
            }

            fclose(fp);

            printf("Data saved successfully to productivity_log.txt\n");
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
