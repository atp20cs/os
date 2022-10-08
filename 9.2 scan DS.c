#include<stdio.h>
#include<stdlib.h>
int main()

{
    int rs[100],i,j,n,seek=0,initial,size,move;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&rs[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    printf("Enter total disk size\n");
    scanf("%d",&size);
    printf("Enter the head movement direction for high 1 and for low 0\n");
    scanf("%d",&move);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(rs[j]>rs[j+1])
            {
                int temp;
                temp=rs[j];
                rs[j]=rs[j+1];
                rs[j+1]=temp;
            }

        }
    }
    int index;
    for(i=0;i<n;i++)
    {
        if(initial<rs[i])
        {
            index=i;
            break;
        }
    }
    printf("The sequence is ");
    if(move==1)
    {
        for(i=index;i<n;i++)
        {
            seek=seek+abs(rs[i]-initial);
            initial=rs[i];
	    printf("%d\t",rs[i]);
        }
        seek=seek+abs(size-rs[i-1]-1);
        initial = size-1;
        for(i=index-1;i>=0;i--)
        {
             seek=seek+abs(rs[i]-initial);
             initial=rs[i];
	     printf("%d\t",rs[i]);
            
        }
    }
    else
    {
        for(i=index-1;i>=0;i--)
        {
            seek=seek+abs(rs[i]-initial);
            initial=rs[i];
            printf("%d\t",rs[i]);
        }
        seek=seek+abs(rs[i+1]-0);
        initial =0;				 // seek=seek+abs(size-1-0);  // initial =size-1; 
        for(i=index;i<n;i++)       //for(i=n-1;i>=index;i--)			
        {
             seek=seek+abs(rs[i]-initial);
             initial=rs[i];
	     printf("%d\t",rs[i]);
            
        }
    }
    
    printf("Total seek time is %d\n",seek);
    return 0;
}
