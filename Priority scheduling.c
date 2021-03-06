#include<stdio.h>
int main()
{

    int bt[20], p[20], wt[20], tat[20],pt[20];
    int i, j, n, total=0, pos, temp;
    float avg_wt, avg_tat;
    printf("Enter number of process: ");
    scanf("%d", &n);
    printf("\nEnter Burst Time and Priority For %d Processes:\n", n);
    for(i=0;i<n;i++)
    {
        printf("Process[%d]:", i+1);
        printf("Process Burst Time:\t");
        scanf("%d", &bt[i]);
        printf("Process Priority:\t");
        scanf("%d", &pt[i]);
        p[i]=i+1; //contains process number
    }
   //sorting in ascending oder using selection sort for priority
   for(i=0;i<n;i++)
   {
       pos=i;
       for(j=i+1;j<n;j++)
       {
           if(pt[j]<pt[pos])
            pos=j;

       }
       temp=pt[i];
       pt[i]=pt[pos];
       pt[pos]=temp;
       temp=bt[i];
       bt[i]=bt[pos];
       bt[pos]=temp;
       temp=p[i];
       p[i]=p[pos];
       p[pos]=temp;
   }
   wt[0]=0;     //waiting time for first process will be zero

   //calculate waiting time
   for(i=1;i<n;i++)
   {
       wt[i]=0;
       for(j=0;j<i;j++)
           wt[i]+=bt[j];
           total+=wt[i];

   }
   avg_wt=(float)total/n;   //average waiting time
   total=0;
   printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
   for(i=0;i<n;i++)
   {
       tat[i]=bt[i]+wt[i];  //calculate turnaround time
       total+=tat[i];
       printf("\nP[%d]\t\t%d\t\t%d\t\t%d", p[i], bt[i], wt[i], tat[i]);
   }
avg_tat=(float)total/n;    //average turnaround time
printf("\n\nAverage Waiting Time: %f", avg_wt);
printf("\nAverage Turnaround Time: %f", avg_tat);
return 0;
}
