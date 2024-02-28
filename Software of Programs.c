//
// Created by 12san on 10-02-2024.
//
#include<stdio.h>
#include<string.h>
#include"ourheaderfile.h"

int main() {
    printf(".............................SOFTWARE OF PROGRAMS......................................\n");
    int a, b, x, j, num,n,r,year,rows,cols,choice,option,o,q,total, rank,range,result;
    double total_candidates_below, total_candidates;

#define MAX_ROWS 10
#define MAX_COLS 10
    int matrix[MAX_ROWS][MAX_COLS], transpose[MAX_COLS][MAX_ROWS];
    char c, roman[10];
    float ru, p, sgpa, percentage, Sgpa[20];
    while (1) {
        printf("1.exit\n");
        printf("2.Armstrong number\n");
        printf("3.calculation of two number\n");
        printf("4.Sum of N numbers\n");
        printf("5.Area of a circle\n");
        printf("6.ASCII value\n");
        printf("7.Currency converter into Dollars,Euros,Yen,Rubel.\n");
        printf("8.Transpose of Matrix calculation\n");
        printf("9.SGPA to CGPA\n");
        printf("10.SGPA to Percentage and Reverse\n");
        printf("11.Pattern\n");
        printf("12.Rank to Percentile conversion\n");
        printf("13.percentile to rank calculation\n");
        printf("14.Information\n");
        printf("15.Roman number to Integer and the Reverse\n");
        printf("16.Upto which number you want to find sum:\n");
        printf("17.Enter the year to check it is leap year or not\n");
        printf("Choose the option:\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("thank you for your time.");
            break;
        }
        switch (choice) {
            case 2:
                printf("Enter number to check Armstrong numbers:\n");
                scanf("%d", &x);
                if (armstrong(num) == 0) {
                    printf("%d is an armstrong number.\n", num);
                } else {
                    printf("%d is not an armstrong number.\n", num);
                }
                break;
            case 3:
                printf("Enter two number:\n");
                scanf("%d %d", &a, &b);
                printf("Addition is: %d\n", sum(a, b));
                printf("Substraction is: %d\n", sum(a, b));
                printf("Multiplication is: %d\n", sum(a, b));
                printf("Division is: %d\n", sum(a, b));
                printf("Modulus is: %d\n", sum(a, b));
                break;
            case 4:
                printf("Enter the number:");
                scanf("%d", &n);
                printf("The sum of the first %d natural numbers is %d\n", n, SumOfNaturalNumbers(n));
                break;
            case 5:
                printf("Enter the number:\n");
                scanf("%d", &r);
                int area = 3.14 * r * r;
                printf("Area of radius %d of a circle is:%d", r, area);
                break;
            case 6:
                printf(" Input the character to know its ASCII value:\n");
                scanf(" %c", &c);
                printf("American Standard code for Information Interchange is:%d\n", c);
                break;
            case 7:
                printf("Enter the amount in rupees:\n");
                scanf("%f", &ru);
                printf("Amount in DOLLARS:%.2f\n", ru * 0.012);
                printf("Amount in EUROS:%.2f\n", ru * 0.011);
                printf("Amount in YEN:%.2f\n", ru * 1.77);
                printf("Amount in RUBEL:%.2f\n", ru * 1.16);
                break;
            case 8:
                // Input the number of rows and columns
                printf("Enter the number of rows (max %d): ", MAX_ROWS);
                scanf("%d", &rows);
                printf("Enter the number of columns (max %d): ", MAX_COLS);
                scanf("%d", &cols);

                // Input elements of the matrix
                printf("Enter elements of the matrix:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("Enter element matrix[%d][%d]: ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }

                // Printing the original matrix
                printf("\nOriginal Matrix:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d\t", matrix[i][j]);
                    }
                    printf("\n");
                }

                // Finding the transpose of the matrix
                for (int i = 0; i < cols; i++) {
                    for (int j = 0; j < rows; j++) {
                        transpose[i][j] = matrix[j][i];
                    }
                }

                // Printing the transpose of the matrix
                printf("\nTranspose of Matrix:\n");
                for (int i = 0; i < cols; i++) {
                    for (int j = 0; j < rows; j++) {
                        printf("%d\t", transpose[i][j]);
                    }
                    printf("\n");
                }

                return 0;
                break;
            case 9:
                printf("Enter the number of semesters: ");
                scanf("%d", &n);

                printf("Enter SGPA for each semester:\n");
                for (int i = 0; i < n; i++) {
                    printf("Enter SGPA for Semester %d: ", i + 1);
                    scanf("%f", &Sgpa[i]);
                }
                cgpa = calculateCGPA(Sgpa, n);

                printf("CGPA = %.2f\n", cgpa);
                break;
            case 10:
                printf("1.SGPA to Percentage\n");
                printf("2.Percentage to SGPA\n");
                printf("Select your option:\n");
                scanf("%d", &option);
                if (option == 1) {
                    // Convert SGPA to percentage
                    printf("Enter SGPA: ");
                    scanf("%f", &sgpa);
                    percentage = SgpaToPercentage(sgpa);
                    printf("Percentage: %.2f%%\n", percentage);
                } else {
                    // Convert percentage to SGPA
                    printf("\nEnter Percentage: ");
                    scanf("%f", &percentage);
                    sgpa = PercentageToSgpa(percentage);
                    printf("SGPA: %.2f\n", sgpa);
                }
                break;
            case 11:
                printf("1.Pattern of numbers\n");
                printf("2.pattern of stars\n");
                printf("Select the option:");
                scanf("%d", &o);
                if (o == 1) {
                    printf("pattern of numbers\n");
                    printf("1.Fibonacci series\n");
                    printf("2.triangle\n");
                    printf("3.Floid's triangle\n");
                    printf("4.Arithmetic Sequence\n");
                    printf("5.Geometric sequence\n");
                    printf("6.square number sequence\n");
                    printf("7.Harmonic sequence\n");
                    printf("8.Cube number sequence\n");
                    printf("choose the option:\n");
                    scanf("%d", &q);
                    switch (q) {
                        case 1:
                            printf("Enter the number of terms for Fibonacci Series: ");
                            scanf("%d", &n);
                            generateFibonacciSeries(n);
                            break;
                        case 2:
                            printf("enter the value of n:");
                            scanf("%d", &n);
                            generateTriangularSequence1(n);
                            generateTriangularSequence2(n);
                            break;
                        case 3:
                            printf("Floyd's Triangle");
                            printf("Enter the number of rows: ");
                            scanf("%d", &rows);
                            printFloydsTriangle(rows);
                            break;
                        case 4:
                            break;
                        default:
                            printf("Invalid choice\n");
                    }
                } else {
                    printf("pattern of stars\n");
                    printf("1.Triangle shape\n");
                    printf("2.Fibonacci series\n");
                    printf("Choose the option:\n");
                    scanf("%d", &o);
                    switch (o) {
                        case 1:
                            printf("Triangle shape");
                            printf("enter the rows:");
                            scanf("%d", &rows);
                            generateTriangleShape(rows);
                    }
                }
                break;
            case 12:
                printf("Enter the rank: ");
                scanf("%d", &rank);

                printf("Enter the total number of students appeared: ");
                scanf("%d", &total);

                float percentile = convert_rank_to_percentile(rank, total);

                printf("The percentile corresponding to rank %.1f is: %.2f\n", rank, percentile);
                break;
            case 13:
                printf("Enter total number of students who have given exam:");
                scanf("%d", &total);
                printf("Enter your percentile:\n");
                scanf("%f", &p);
                int rank = percentile_to_rank_conversion(total, p);
                printf("Your rank is :%d", rank);
                break;
            case 14:
                printf("\"Total Rank =total number of students who have been given exam ×(100- your percentile)/100\n"
                       "For example if your percentile is 98 then you are lying between in top 2 percent student means what ?\n"
                       "It means that less than 98 percent student are of behind you."
                       "If you want to calculate percentile rank then there is another method."

                       "As you know that there are 8 slot for JEE mains exam and 30000 student have seated in one slot then your\n"
                       "\n"
                       "Percentile rank =no. Of candidates behind you/total number of students who have given the exam× 100.\n"
                       "\n"
                       "For example if we assure that your percentile rank is 27001 then\n"
                       "\n"
                       "No. Of candidates behind you is 27000 and total number of students who have given the exam on that slot is 30000 then your percentile will be =\n"
                       "\n"
                       "27000/30000×1000\n"
                       "=90 percentile. */");
                printf("              /*For example: If in an examination a student’s percentile is 75 then it means that the student has scored more than 75% of students who took the test. \n"
                       " \n"
                       "Now, in order to calculate percentile we have the following formula:\n"
                       "PERCENTILE = (NUMBER OF STUDENTS WHO SCORED BELOW OR EQUAL TO THE DESIRED STUDENT/ TOTAL NUMBER OF STUDENTS – 1) * 100 \n"
                       "P = (n/N) × 100\n"
                       "n = ordinal rank of the given value or value below the number.\n"
                       "N = number of values in the data set.\n"
                       "P = percentile.\n"
                       "\n"
                       "*/");
                break;
            case 15:
                printf("1.Roman number to Integer\t");
                printf("2.Integer to Roman number\t");
                printf("Choose the option:\n");
                scanf("%d", &j);
                switch (j) {
                    case 1:
                        printf("Enter a Roman numeral: ");
                        scanf("%s", &roman);

                        int integer = romanToInt(roman);

                        if (integer >= 0) {
                            printf("Integer equivalent: %d\n", integer);
                        } else {
                            printf("Invalid Roman numeral.\n");
                        }
                        break;
                    case 2:
                        printf("Enter an integer: ");
                        scanf("%d", &num);

                        printf("Roman numeral representation: ");
                        integerToRoman(num);
                        printf("\n");
                        break;
                    default:
                        puts("sorry unavailable\n");
                        break;
                }
                case 16:
                        printf("Upto which number you want to find sum:\n");
                        scanf("%d",&range);
                        result=addition(range);
                        printf("1+2+3+.....+%d+%d = %d\n",(range-1),range,result);
                        break;
            case 17:
                printf("Enter the year:\n");
                scanf("%d",&year);
                if(Leapyear(year)){
                    printf("%d is a leap year\n",year);
                }else{
                    printf("%d is not a leap year\n",year);
                }
                break;
            default:
                printf("Sorry unavailable.....\n");
                break;
        }
    }
}