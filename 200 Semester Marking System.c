//
// Created by 12san on 25-08-2024.
//
#include<stdio.h>

float gradeToPoint(char grade){
    switch(grade){
        case 'A':
        case 'a':
            return 10.0;
            break;
        case 'B':
        case 'b':
            return 8.0;
            break;
        case 'C':
        case 'c':
            return 6.0;
            break;
        case 'D':
        case 'd':
            return 4.0;
            break;
        case 'f':
        case 'F':
            return 0.0;
            break;
        default:
            return -1.0;
    }
}

int main() {
    int n, i;

    printf("Enter the number of subjects:\n");
    scanf("%d", &n);

    float credits[n];
    char grades[n];

    float totalCredits = 0, sum = 0;
    for (i = 0; i < n; i++) {
        printf("Enter the credit for subject %d:\t", i + 1);
        scanf("%f", &credits[i]);

        printf("Enter the grade(A/B/C/D/E/F) for subject %d:\t ", i + 1);
        scanf("%c", &grades[i]);

        float gradepoint = gradeToPoint(grades[i]);
        if (gradepoint == -1.0) {
            printf("Invalid Choice");
            return -1;
        }
        totalCredits += credits[i];
        sum += gradepoint * credits[i];
    }
    float gpa=sum/totalCredits;
    printf("Your GPA for the semester is:\t%.2f",gpa);
    return 0;
}