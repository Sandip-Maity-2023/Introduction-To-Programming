#include <stdio.h>
#include <math.h> // Added math.h for fabs() function

int main()
{
    int count, t, limit;
    float temp, error, a, sum = 0;
    float matrix[10][10], y[10], allowed_error;

    printf("\nEnter the Total Number of Equations:\t");
    scanf("%d", &limit);

    // highest error threshold at which accuracy is attained or errors are taken into account
    printf("Enter Allowed Error:\t");
    scanf("%f", &allowed_error);

    printf("\nEnter the Coefficients\n");
    for (count = 1; count <= limit; count++)
    {
        for (t = 1; t <= limit + 1; t++)
        {
            printf("Matrix[%d][%d] = ", count, t);
            scanf("%f", &matrix[count][t]);
        }
    }

    for (count = 1; count <= limit; count++)
    {
        y[count] = 0;
    }

    do
    {
        a = 0;

        for (count = 1; count <= limit; count++)
        {
            sum = 0;

            for (t = 1; t <= limit; t++) // Removed extra condition 't a'
            {
                if (t != count)
                {
                    sum += matrix[count][t] * y[t];
                }
            }

            temp = (matrix[count][limit + 1] - sum) / matrix[count][count];
            error = fabs(temp - y[count]);

            if (error > a)
            {
                a = error;
            }

            y[count] = temp;
            printf("\nY[%d] = %f", count, y[count]);
        }

        printf("\n");
    } while (a >= allowed_error);

    printf("\n\nSolution:\n\n");

    for (count = 1; count <= limit; count++)
    {
        printf("Y[%d]:\t%f\n", count, y[count]);
    }

    return 0;
}
