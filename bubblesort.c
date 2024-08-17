#include<stdio.h>
void main()
{
	int i,j,temp,l;
	int c=0;
	printf("Enter the limit=");
	scanf("%d",&l);
	c++;
	int a[l];
	printf("Enter the array=");
	for(i=0;i<l;i++)
        { 
          c++;
          scanf("%d",&a[i]);
          c++;
        }
        for(i=0;i<l-1;i++)
        {
         c++;
         for(j=0;j<l-i-1;j++)
         {
          c++;
          if(a[j]>=a[j+1])
          {
           temp=a[j];
           c++;
           a[j]=a[j+1];
           c++;
           a[j+1]=temp;
           c++;
          }
         }
        }
        printf("Sorted Array=\n");
        for(i=0;i<l;i++)
        {
         c++;
         printf("%d\n",a[i]);
        }
        printf("\n");
        printf("Time complicity=%d\nSpace complicity=%d",c,20*(4*l));
 }

