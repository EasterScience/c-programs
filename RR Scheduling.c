#include<stdio.h>
int main()
{
    int i, j, n, time, remain, flag=0, time_quantum;
    int wt=0, tat=0, at[10], bt[10], rt[10];
    printf("Enter number of Process: ");
    scanf("%d", &n);
    remain=n;
    printf("\nEnter Arrival Time and Burst Time for %d processes\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nProcess[%d]\n", i+1);
        printf("Process Burst Time: \t");
        scanf("%d", &bt[i]);
        printf("Process Arrival Time: \t");
        scanf("%d", &at[i]);
        rt[i]=bt[i];
    }
    printf("\nEnter Time Quantum:\t");
    scanf("%d", &time_quantum);
    printf("\n\nProcess\t\tTurnaround Time\tWaiting Time\n\n");
    for(time=0,i=0;remain!=0;)
    {
        if(rt[i]<=time_quantum && rt[i]>0)
        {
            time+=rt[i];
            rt[i]=0;
            flag=1;
        }
        else if(rt[i]>0)
        {
            rt[i]-=time_quantum;
            time+=time_quantum;
        }
        if(rt[i]==0 && flag==1)
        {
            remain--;
            printf("p[%d]\t\t%d\t\t%d\n", i+1, time-at[i], time-at[i]-bt[i]);
            wt+=time-at[i]-bt[i];
            tat+=time-at[i];
            flag=0;
        }
        if(i==n-1)
            i=0;
        else if(at[i+1]<=time)
            i++;
        else
            i=0;
    }
    printf("\n\nAverage Waiting Time: %f\n", wt*1.0/n);
    printf("\nAverage Turnaround Time: %f", tat*1.0/n);
    getch();
    return 0;
}
