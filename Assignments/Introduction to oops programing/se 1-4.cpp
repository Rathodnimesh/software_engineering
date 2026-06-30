#include <iostream>
#include <vector>
using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    Task(string t) {
        title = t;
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }

    void display(int index) {
        cout << index + 1 << ". " << title
             << " - " << (isDone ? "Done" : "Pending") << endl;
    }
};

// TaskList class
class TaskList {
private:
    vector<Task> tasks;

public:
    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markDone();
        } else {
            cout << "Invalid task number!" << endl;
        }
    }

    void showTasks() {
        cout << "\nTask List:\n";
        for (int i = 0; i < tasks.size(); i++) {
            tasks[i].display(i);
        }
    }
};

int main() {
    TaskList myTasks;

    myTasks.addTask("Complete C++ Assignment");
    myTasks.addTask("Study OOP Concepts");
    myTasks.addTask("Submit Project");

    // Mark second task as done
    myTasks.markTaskDone(1);

    // Display all tasks
    myTasks.showTasks();

    return 0;
}
