#include<stdio.h>
void main()
    {
    int a[6],count=0,n,i,x,time=0,space=0;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    time+=2;
    space=9*4;
    time++;
    printf("enter the elements=\n");
    for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
      time++;
     printf("Enter the number of search=");
     scanf("%d",&x);
     time+=2;
     for(i=0;i<n;i++)
      {
       if(x==a[i])
       {
       printf("Position %d\n",i+1);
       count=1;
       }
      }
      time++;
      if (count==0)
      {
      printf("The element is not found\n");
      }
      else
      {
      printf("The element is found\n");
      }
      time+=5;
      printf("Time complexity %d\n",time);
      printf("Space complexity %d",space);
    }  
