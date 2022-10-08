#include<stdio.h>
#include<stdlib.h>
void main()

{
  int rs[100],i,n,seek=0,initial;
  printf("Enter the number of requests \n");
  scanf("%d",&n);
  printf("Enter the sequence of request \n");
  for(i=0;i<n;i++)
  {
 	 scanf("%d",&rs[i]);
  }
  printf("Enter initial head position \n");
  scanf("%d",&initial);
  printf("The sequence is ");
  for(i=0;i<n;i++)
  {
    	seek=seek+abs(rs[i]-initial);
    	initial=rs[i];
	printf("%d\t",rs[i]);
  }
  printf("Total Seek Time=%d\n",seek);

}
