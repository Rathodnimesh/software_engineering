#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define TASK_LENGTH 100

// Global array for tasks
char tasks[MAX_TASKS][TASK_LENGTH];
int taskCount = 0;

void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Task list is full.\n");
        return;
    }

    printf("Enter a task: ");
    getchar(); // consume leftover newline
    fgets(tasks[taskCount], TASK_LENGTH, stdin);

    // Remove trailing newline if present
    tasks[taskCount][strcspn(tasks[taskCount], "\n")] = '\0';

    taskCount++;
}

void printTasks() {
    printf("\nTask List:\n");

    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Add Task\n");
        printf("2. Show Tasks\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                printTasks();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}
