//
// Created by 12san on 03-02-2026.
//
#include <stdio.h>

int main()
{
    int pid[15], bt[15], wt[15];
    int n, i;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter process id of all the processes:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pid[i]);
    }

    printf("Enter burst time of all the processes:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }

    // Waiting time of first process is 0
    wt[0] = 0;

    // Calculating waiting time
    for (i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }

    printf("\nProcess ID\tBurst Time\tWaiting Time\tTurnaround Time\n");

    float total_wt = 0, total_tat = 0;

    for (i = 0; i < n; i++)
    {
        int tat = bt[i] + wt[i];

        printf("%d \t\t\t\t %d \t\t\t\t %d \t\t\t\t %d \t\n", pid[i], bt[i], wt[i], tat);

        total_wt += wt[i];
        total_tat += tat;
    }

    float avg_wt = total_wt / n;
    float avg_tat = total_tat / n;

    printf("\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);

    return 0;
}
