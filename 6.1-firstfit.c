#include<stdio.h>
#define max 25
void main()
{
	int frag[max],b[max],f[max],i,j,nb,nf,temp;
	static int bf[max],ff[max];
	printf("\n MEMORY MANAGEMENT SCHEME - FIRST FIT");
	printf("\n Enter the number of blocks : ");
	scanf("%d",&nb);
	printf("\n Enter the number of files : ");
	scanf("%d",&nf);
	printf("\n Enter the size of blocks : ");
	for(i=1;i<=nb;i++)
	{
		printf("\n Block %d : ",i);
		scanf("%d",&b[i]);
	}
	printf("\n Enter the size of the files : \n");
	for(i=1;i<=nf;i++)
	{
		printf("\n File %d : ",i);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=nf;i++)
	{
		for(j=1;j<=nb;j++)
		{
			if(bf[j]!=1) 
			{
				temp=b[j]-f[i];
				if(temp>=0)
				{
					ff[i]=j;
					break;
				}
			}
		}
	frag[i]=temp;
	bf[ff[i]]=1;
	}
	printf("\nFile_no:\tFile_size:\t Block_no:\t Block_size:\t Fragment");
	for(i=1;i<=nf;i++){
		if(f[i]>b[ff[i]]){
			printf("\n%d\t\t%d\t\tNot Allocated\t%d\t\t%d\n",i,f[i],b[ff[i]],frag[i]);
		}
		else{
			printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,f[i],ff[i],b[ff[i]],frag[i]);
		}
}}

