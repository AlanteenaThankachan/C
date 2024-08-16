#include<stdio.h>
void main()
{
int n,flag=0,mid,i,x,time=0,space=0;
space=7*4;
printf("Enter the no.of elements=");
scanf("%d",&n);
int a[n];
int left=0,right=n-1;
printf("Enter the elements");
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
}
printf("Enter the number to be found");
scanf("%d",&x);
time+=3;
while(left<=right)
{
mid=(left+right)/2;
if(x==a[mid])
{
printf("Position of the element is  %d\n",mid+1);
flag=1;
break;
}
else if(x>a[mid])
{
left=mid+1;
continue;
}
else if (x<a[mid])
{
right=mid-1;
continue;
}
time+=3;
}
if(flag==0)
{
printf("Element not found");
time++;
time+=1;
}
else 
{
printf("Element found");
}
time++;
printf("Time complexity %d\n",time);
printf("Space complexity %d",space);
}
 
