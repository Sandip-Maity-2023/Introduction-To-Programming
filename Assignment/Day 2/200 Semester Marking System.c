#include<stdio.h>

float gradeToPoint(char grade){
    switch(grade){
        case 'A':
        case 'a':
            return 10.0;
        case 'B':
        case 'b':
            return 8.0;
        case 'C':
        case 'c':
            return 6.0;
        case 'D':
        case 'd':
            return 4.0;
        case 'f':
        case 'F':
            return 0.0;
        default:
            return -1.0;
    }
}

int main() {
    const int n = 6; // Total number of subjects
    float credits[] = {4.0, 4.0, 4.0, 4.0, 4.0, 2.0}; // Credits for each subject
    char subjects[][50] = {
            "Discrete Structure & Logic",
            "Principles of Programming",
            "Switching Circuits & Logic Design",
            "Math-III",
            "Data Structures & Algorithms (DSA)",
            "Lab Subjects"
    };

    char grades[n];
    float totalCredits = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter the grade (A/B/C/D/F) for %s:\t", subjects[i]);
        scanf(" %c", &grades[i]);

        float gradepoint = gradeToPoint(grades[i]);
        if (gradepoint == -1.0) {
            printf("Invalid grade entered for %s.\n", subjects[i]);
            return -1;
        }
        totalCredits += credits[i];
        sum += gradepoint * credits[i];
    }

    float gpa = sum / totalCredits;
    printf("Your GPA for the semester is:\t%.2f\n", gpa);
    return 0;
}
