#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define TASK_LENGTH 100

// Global arrays
char tasks[MAX_TASKS][TASK_LENGTH];
int status[MAX_TASKS]; // 0 = Not Done, 1 = Done
int taskCount = 0;

// Add task
void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Task list is full.\n");
        return;
    }

    printf("Enter a task: ");
    getchar(); //  newline
    fgets(tasks[taskCount], TASK_LENGTH, stdin);

    // Remove newline
    tasks[taskCount][strcspn(tasks[taskCount], "\n")] = '\0';

    status[taskCount] = 0; // default = not done
    taskCount++;
}

// Mark task as done
void markTaskDone(int index) {
    if (index < 0 || index >= taskCount) {
        printf("Invalid task number.\n");
        return;
    }

    status[index] = 1;
    printf("Task %d marked as DONE.\n", index + 1);
}

// Display tasks
void printTasks() {
    printf("\nTask List:\n");

    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s - %s\n", i + 1, tasks[i],
               status[i] ? "DONE" : "NOT DONE");
    }
}

int main() {
    int choice, index;

    while (1) {
        printf("\n1. Add Task\n");
        printf("2. Show Tasks\n");
        printf("3. Mark Task Done\n");
        printf("4. Exit\n");
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
                printTasks();
                printf("Enter task number to mark as done: ");
                scanf("%d", &index);
                markTaskDone(index - 1); // adjust for array index
                printTasks(); // show updated list                                  
                break;

            case 4:
                return 0;

            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}
