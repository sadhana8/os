#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a[10],b[10],x[10];
 int waiting[10],turnaround[10],completion[10];
 int i,j,smallest,count=0,time,n;
 double avg=0,tt=0,end;
 
 
 printf("\nEnter the number of Processes: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("\nEnter arrival time of process %d : ",i+1);
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   printf("\nEnter burst time of process %d : ",i+1);
   scanf("%d",&b[i]);
 }
 system("cls");
 for(i=0;i<n;i++)
 x[i]=b[i];
  b[9]=9999;
 for(time=0;count!=n;time++)
 {
   smallest=9;
  for(i=0;i<n;i++)
  {
   if(a[i]<=time && b[i]<b[smallest] && b[i]>0 )
   smallest=i;
  }
  b[smallest]--;
  if(b[smallest]==0)
  {
   count++;
   end=time+1;
   completion[smallest] = end;
   waiting[smallest] = end - a[smallest] - x[smallest];
   turnaround[smallest] = end - a[smallest];
  }
 }
 printf("pid \t arrival \t burst \t\tcompletion \tturnaround \twaiting");
 for(i=0;i<n;i++)
 {
   printf("\n %d \t   %d \t\t %d\t\t%d   \t\t%d\t\t%d",i+1,a[i],x[i],completion[i],turnaround[i],waiting[i]);
   avg = avg + waiting[i];
   tt = tt + turnaround[i];
 }
 printf("\n\nAverage waiting time = %lf\n",avg/n);
 printf("Average Turnaround time = %lf",tt/n);
}
