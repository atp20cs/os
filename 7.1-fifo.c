 #include<stdio.h>
int main()
{
 int i=0,j=0,k=0,i1=0,m,n,rs[30],flag=1,p[30],rno;                                            //70120304230321201701
 system("clear");
 printf("enter th eno:of frames:");
 scanf("%d",&n);
 printf("enter the reference count:");
 scanf("%d",&rno);
 printf("enter the reference string:");
 while(i<rno)
 {
  scanf("%d",&rs[i]);
  i++;
  }
 m=i;
 for(j=0;j<n;j++)
  p[j]=-1;
 for(i=0;i<m;i++)
 {
  flag=1;
  for(j=0;j<n;j++)
  if(p[j]==rs[i])
  {
   printf("data already in page...\n");
   flag=0;
   break;
   }
  if(flag==1)
  {
   p[i1]=rs[i];
   i1++;
   k++;
   if(i1==n)
   i1=0;
   for(j=0;j<n;j++)
   {
    printf("\npage %d:%d:",j+1,p[j]);
    if(p[j]==rs[i])
     printf("*");
    }
    printf("\n\n");
    }
   }
   printf("total no: page faults=%d",k);
   return 0;
  }
           
