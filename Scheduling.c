#include<stdio.h>
int main()
{
int at[10]={0},bt[10]={},ct[10]={0},tat[10]={0},wt[10]={0};
int sum,n;
float totalTAT=0,totalWT=0;
int i,j,k;
printf("Enter the total number of process\n");
scanf("%d",&n);
printf("Enter the Arrival time and Burst time of each process \n");
for(i=0;i<n;i++)
{
printf("Arrival time of Process[%d] ",i+1);
scanf("%d",&at[i]);
printf("Burst time of Process[%d] ",i+1);
scanf("%d",&bt[i]);
}
for(j=0;j<n;j++)
{
sum+=bt[j];
ct[j]+=sum;
}
for(k=0;k<n;k++)
{
tat[k]=ct[k]-at[k];
totalTAT+=tat[k];
}
for(k=0;k<n;k++)
{
wt[k]=tat[k]-bt[k];
totalWT+=wt[k];
}
printf("Solution\n");
printf("P#\t AT\t BT\t CT\t TAT\t WT\t \n\n");
for(i=0;i<n;i++)
{
printf("P%d\t %d\t %d\t %d\t %d\t %d\t \n\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
}
printf("\n\nAverage TurnAroundtime =%f\n",totalTAT/n);
printf("Average WT=%f\n\n",totalWT/n);
return 0;
}


