#include <stdio.h>
void main()
 {
  int a[10],n,i,j,min,temp;
  printf("Enter the element of array");
  scanf("%d",&n);
  printf("Enter the numbers\n");
  for(i=0;i<5;i++)
   {
   scanf("%d",&a[i]);
   }
    for(i=0;i<n-1;i++)
    {
    min=i;
    for(j=i+1;j<n;j++)
    {
    if(a[j]<a[min])
    {
    min=j;
    }
   }
   if(i!=min)
   {
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    }
    }
   printf("Elements are \n");
   for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
   }
 }
        
  
