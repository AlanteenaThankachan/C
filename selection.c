#include <stdio.h>
void main()
{
int i,n,j,small,temp,a[100],t=0,space=0;
space=7*4;
t=t+2;
printf("enter the no of elements");
t++;
scanf("%d",&n);
t++;
printf("enter the numbers");
t++;
for(i=0;i<n;i++)
{
t++;
scanf("%d",&a[i]);
space+=4;
}
t=t+1;
for(i=0;i<n-1;i++)
{
t++;
small=i;
for(j=i+1;j<n;j++)
{
t++;
if(a[j]<a[small])
{
t++;
small=j;
j++;
}
}
t+=1;
if(small!=i)
{
t++;
temp=a[i];
a[i]=a[small];
a[small]=temp;
t++;
}
}
t=t+1;
printf("sorted array:\n");
t++;
for(i=0;i<n;i++)
{
t++;
printf("%d\t",a[i]);
t++;
}
printf("\nspace complexity %d",space);
t++;
printf("\ntime complexity %d",t++);
}

