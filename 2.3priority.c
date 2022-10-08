  #include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int pno;
	int pri;
	int btime;
	int wtime;
}sp;
int main()
{
	int i,j,n;
	int tbm=0,totwtime=0,totttime=0;
	sp *p,t;
	printf("\n PRIORITY SCHEDULING.");
	printf("\n Enter the number of process.");
	scanf("%d",&n);
	p=(sp*)malloc(sizeof(sp));
	printf("Enter the burst time and priority : \n");
	for(i=0;i<n;i++)
	{
		printf("Process %d:",i+1);
		scanf("%d%d",&p[i].btime,&p[i].pri);
		p[i].pno=i+1;
		p[i].wtime=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].pri>p[j].pri)
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	printf("\n Process \t Priority \t Burst Time \t Waiting Time \t Turn Around Time \n");
	for(i=0;i<n;i++)
	{
		totwtime+=p[i].wtime=tbm;
		tbm+=p[i].btime;
		printf("\n %d\t\t %d\t\t %d",p[i].pno,p[i].pri, p[i].btime);
		printf("\t\t %d\t\t%d",p[i].wtime,p[i].wtime+p[i].btime);
	}
	totttime=tbm+totwtime;
	printf("\n Total Waiting Time : %d",totwtime);
	printf("\n Average Waiting Time : %f",(float)totwtime/n);
	printf("\n Total Turn Around Time : %d",totttime);
	printf("\n Average Turn Around Time : %f",(float)totttime/n);
}


