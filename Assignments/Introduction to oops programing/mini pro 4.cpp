#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void input()
    {
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Platform: ";
        getline(cin, platform);

        cout << "Enter Views: ";
        cin >> views;
        cin.ignore();

        cout << "Enter Status: ";
        getline(cin, status);
    }

    void display()
    {
        cout << "Title    : " << title << endl;
        cout << "Platform : " << platform << endl;
        cout << "Views    : " << views << endl;
        cout << "Status   : " << status << endl;
    }

    string toFile()
    {
        return title + "|" + platform + "|" + to_string(views) + "|" + status;
    }

    void fromFile(string line)
    {
        string temp;

        stringstream ss(line);

        getline(ss, title, '|');
        getline(ss, platform, '|');

        getline(ss, temp, '|');
        views = stoi(temp);

        getline(ss, status, '|');
    }
};

vector<Content> loadContents()
{
    vector<Content> list;
    ifstream fin("content_list.txt");

    string line;
    while (getline(fin, line))
    {
        if (line.empty())
            continue;

        Content c;
        c.fromFile(line);
        list.push_back(c);
    }

    fin.close();
    return list;
}

void saveContents(vector<Content> &list)
{
    ofstream fout("content_list.txt");

    for (int i = 0; i < list.size(); i++)
    {
        fout << list[i].toFile() << endl;
    }

    fout.close();
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Content Manager =====\n";
        cout << "1. Add Content\n";
        cout << "2. Display Contents\n";
        cout << "3. Update Status\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Content c;
            c.input();

            ofstream fout("content_list.txt", ios::app);
            fout << c.toFile() << endl;
            fout.close();

            cout << "Content Saved Successfully!\n";
            break;
        }

        case 2:
        {
            vector<Content> list = loadContents();

            if (list.empty())
            {
                cout << "No content found.\n";
            }
            else
            {
                for (int i = 0; i < list.size(); i++)
                {
                    cout << "\nContent #" << i + 1 << endl;
                    list[i].display();
                }
            }
            break;
        }

        case 3:
        {
            vector<Content> list = loadContents();

            if (list.empty())
            {
                cout << "No content available.\n";
                break;
            }

            cout << "\nAvailable Content:\n";
            for (int i = 0; i < list.size(); i++)
            {
                cout << i + 1 << ". "
                     << list[i].title
                     << " (" << list[i].status << ")" << endl;
            }

            int num;
            cout << "\nEnter content number to update: ";
            cin >> num;

            if (num < 1 || num > list.size())
            {
                cout << "Invalid selection.\n";
                break;
            }

            cin.ignore();

            cout << "Enter new status: ";
            getline(cin, list[num - 1].status);

            saveContents(list);

            cout << "Status updated successfully!\n";
            break;
        }

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
