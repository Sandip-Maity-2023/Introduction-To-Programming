//
// Created by 12san on 22-11-2024.
//
#include <iostream>
#include <string>

using namespace std;

class Faculty {
private:
    string name;
    int id;         // Faculty ID
    float salary;   // Faculty salary
    string department;

public:
    // Constructor to initialize faculty details
    Faculty(string n = "", int i = 0, float s = 0.0, string dep = "")
            : name(n), id(i), salary(s), department(dep) {}

    // Function to display faculty details
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: INR " << salary << endl;
        cout << "Department: " << department << endl;
        cout << "-------------------------" << endl;
    }

    // Function to get the department
    string getDepartment() const {
        return department;
    }
};

class Department {
private:
    Faculty facultyList[100];
    int count;
    int cseCount;
    int eeCount;
    int etCount;

public:
    Department() : count(0), cseCount(0), eeCount(0), etCount(0) {}


    void addFaculty(const Faculty &faculty) {
        if (count < 100) {
            facultyList[count] = faculty;
            count++;


            if (faculty.getDepartment() == "CSE") {
                cseCount++;
            } else if (faculty.getDepartment() == "EE") {
                eeCount++;
            } else if (faculty.getDepartment() == "ET") {
                etCount++;
            }
        } else {
            cout << "Cannot add more faculty members. Maximum limit reached." << endl;
        }
    }

    void displayFaculty() const {
        cout << "Faculty Members in the Department:" << endl;
        cout << "-------------------------" << endl;
        for (int i = 0; i < count; i++) {
            facultyList[i].displayDetails();
        }
        cout << "Total number of faculty members: " << count << endl;
        cout << "Number of faculty in CSE: " << cseCount << endl;
        cout << "Number of faculty in EE: " << eeCount << endl;
        cout << "Number of faculty in ET: " << etCount << endl;
    }
};

int main() {
    Department department;
    int numFaculty;

    cout << "Enter the number of faculty members (up to 100): ";
    cin >> numFaculty;

    for (int i = 0; i < numFaculty; i++) {
        string name, departmentName;
        int id;
        float salary;

        cout << "\nEnter details for Faculty Member " << (i + 1) << ":" << endl;

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "ID: ";
        cin >> id;

        cout << "Salary: ";
        cin >> salary;

        cout << "Department (CSE/EE/ET): ";
        cin.ignore();
        getline(cin, departmentName);

        if (departmentName == "CSE" || departmentName == "EE" || departmentName == "ET") {
            Faculty faculty(name, id, salary, departmentName);
            department.addFaculty(faculty);
        } else {
            cout << "Invalid department. Please enter CSE, EE, or ET." << endl;
            i--;
        }
    }

    department.displayFaculty();

    return 0;
}