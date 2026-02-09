//
// Created by 12san on 03-02-2026.
//
#include <stdio.h>

int main() {

    int pid[15];
    int bt[15];
    int at[15];
    int n;

    printf("Enter the number of processes: ");
    scanf("%d",&n);

    printf("Enter process id of all the processes: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&pid[i]);
    }

    printf("Enter arrival time of all the processes: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&at[i]);
    }

    printf("Enter burst time of all the processes: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&bt[i]);
    }

    int wt[n];
    int tat[n];

    wt[0] = 0;
    int ct = at[0] + bt[0];

    for(int i=1; i<n; i++) {
        if(ct < at[i]) {
            ct = at[i];
        }
        wt[i] = ct - at[i];
        ct = ct + bt[i];
    }

    printf("\nProcess ID   Arrival Time   Burst Time   Waiting Time   TurnAround Time\n");

    float twt = 0.0;
    float ttat = 0.0;

    for(int i=0; i<n; i++) {
        tat[i] = wt[i] + bt[i];

        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               pid[i], at[i], bt[i], wt[i], tat[i]);

        twt += wt[i];
        ttat += tat[i];
    }

    printf("Avg. waiting time = %.2f\n", twt/n);
    printf("Avg. turnaround time = %.2f\n", ttat/n);

    return 0;
}