#include<stdio.h>
void main()
{
 int a[20][20],p,b[20][20],m,n,i,j;
 printf("Enter the order of matrix=");
 scanf("%d%d",&m,&n);
 printf("Enter the elements of the matrix=\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 b[0][0]=m;
 b[0][1]=n;
 p=1;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]!=0)
   {
    b[p][0]=i;
    b[p][1]=j;
    b[p][2]=a[i][j];
    p++;
   }
  }
  }
  b[0][2]=p-1;
  printf("Sparse matrix rep=\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d\t",b[i][j]);
   }
   printf("\n");
  }
}
 
 
