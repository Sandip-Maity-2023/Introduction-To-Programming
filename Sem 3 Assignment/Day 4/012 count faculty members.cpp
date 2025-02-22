//
// Created by 12san on 25-09-2024.
//
#include <iostream>
#include <string>
using namespace std;

class Faculty {
    int id;
    string name;
    float salary;
    static int count; // Static member to count the number of faculty

public:
    Faculty() {
        count++; // Increment count whenever a Faculty object is created
    }

    // Function to input faculty details
    void inputDetails() {
        cout << "Enter Faculty ID: ";
        cin >> id;
        cin.ignore();  // Ignore leftover newline from previous input
        cout << "Enter Faculty Name: ";
        getline(cin, name);
        cout << "Enter Faculty Salary: ";
        cin >> salary;
    }

    // Function to display faculty details
    void displayDetails() const {
        cout << "Faculty ID: " << id << endl;
        cout << "Faculty Name: " << name << endl;
        cout << "Faculty Salary: " << salary << endl;
    }

    // Static function to return the current faculty count
    static int getFacultyCount() {
        return count;
    }

    ~Faculty() {
        count--; // Decrement count whenever a Faculty object is destroyed
    }
};

// Initialize the static member variable
int Faculty::count = 0;

int main() {
    int n;
    cout << "Enter the number of faculty members in the department: ";
    cin >> n;

    Faculty *facultyList = new Faculty[n]; // Dynamically create an array for faculty members

    // Input details for each faculty member
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Faculty " << i + 1 << ": " << endl;
        facultyList[i].inputDetails();
    }

    // Display details of all faculty members
    cout << "\nFaculty Details in the Department:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nFaculty " << i + 1 << ":" << endl;
        facultyList[i].displayDetails();
    }

    // Display the total number of faculty members
    cout << "\nTotal Number of Faculty in the Department: " << Faculty::getFacultyCount() << endl;

    delete[] facultyList; // Free the dynamically allocated memory

    return 0;
}
