#include <stdio.h>
void main()
 {
  int n,i,j,temp;
  printf("Enter total number of elements=");
  scanf("%d",&n);
  int a[n];
  printf("Enter the element\n");
  for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
    {
    	temp=a[i];
    	j=i-1;
    	while((j>=0)&&(temp<a[j]))
    	{
    		a[j+1]=a[j];
    		j--;
   	 }
   	 a[j+1]=temp;
    }
    printf("The sorted elements \n");
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
   }
   
