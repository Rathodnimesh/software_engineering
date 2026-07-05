#include <stdio.h>
#include <string.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense expenses[10];
    int count = 0;
    int choice, i;
    float total;

    do
    {
        printf("\n===== Daily Expense Tracker =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (count < 10)
            {
                printf("Enter Expense Category: ");
                scanf(" %[^\n]", expenses[count].category);

                printf("Enter Amount: ");
                scanf("%f", &expenses[count].amount);

                count++;
                printf("Expense added successfully!\n");
            }
            else
            {
                printf("Expense list is full (Maximum 10 expenses).\n");
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("No expenses recorded.\n");
            }
            else
            {
                total = 0;

                printf("\n---------------------------------------\n");
                printf("%-20s %-10s\n", "Category", "Amount");
                printf("---------------------------------------\n");

                for (i = 0; i < count; i++)
                {
                    printf("%-20s %.2f\n",
                           expenses[i].category,
                           expenses[i].amount);

                    total += expenses[i].amount;
                }

                printf("---------------------------------------\n");
                printf("Total Expenses: %.2f\n", total);
            }
            break;

        case 3:
        {
            FILE *fp = fopen("expenses.txt", "w");

            if (fp == NULL)
            {
                printf("Error opening file!\n");
                return 1;
            }

            for (i = 0; i < count; i++)
            {
                fprintf(fp, "%s,%.2f\n",
                        expenses[i].category,
                        expenses[i].amount);
            }

            fclose(fp);
            printf("Expenses saved to expenses.txt\n");
            printf("Thank you!\n");
            break;
        }

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
