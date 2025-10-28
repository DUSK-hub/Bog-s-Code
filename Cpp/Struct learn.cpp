#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct Student
{
    string name;
    int age;
    double gpa;
};

void saveToFile(const vector<Student> &students)
{
    ofstream file("students.txt");
    if (!file)
    {
        cout << "Error opening file for saving!\n";
        return;
    }
    for (const auto &s : students)
    {
        file << s.name << " " << s.age << " " << s.gpa << "\n";
    }
    file.close();
    cout << "✅ Saved " << students.size() << " students to file.\n";
}

void loadFromFile(vector<Student> &students)
{
    ifstream file("students.txt");
    if (!file)
        return; // No file yet, ignore

    Student s;
    while (file >> s.name >> s.age >> s.gpa)
    {
        students.push_back(s);
    }
    file.close();

    if (!students.empty())
        cout << "📂 Loaded " << students.size() << " students from file.\n";
}

void showStudents(const vector<Student> &students)
{
    if (students.empty())
    {
        cout << "No students to show.\n";
        return;
    }
    cout << "\n--- Student List ---\n";
    for (const auto &s : students)
    {
        cout << "Name: " << s.name
             << ", Age: " << s.age
             << ", GPA: " << s.gpa << endl;
    }
}

int main()
{
    vector<Student> students;
    loadFromFile(students); // load old data

    while (true)
    {
        cout << "\n--- Menu ---\n";
        cout << "1. Add student\n";
        cout << "2. Show students\n";
        cout << "3. Save and exit\n";
        cout << "Choose: ";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            Student s;
            cout << "Enter name: ";
            cin >> s.name;
            cout << "Enter age: ";
            cin >> s.age;
            cout << "Enter GPA: ";
            cin >> s.gpa;
            students.push_back(s);
            cout << "✅ Added!\n";
        }
        else if (choice == 2)
        {
            showStudents(students);
        }
        else if (choice == 3)
        {
            saveToFile(students);
            cout << "👋 Goodbye!\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
