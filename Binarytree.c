#include<stdio.h>
void main()
{
  int pos,n,i;
  printf("Enter the SIze of the Array= ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements= \n");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the position elements");
  scanf("%d",&pos);
  if(pos==0)
  {
    printf("No elements at Position 0 ");
 }
  else
 {
  if((pos/2)==0)
  {
    printf("No Parent node=\n");
  }
  else
  {
    printf("Parent node %d=%d\n",a[pos],a[pos/2]);
  }
  if((pos*2)>n)
  {
    printf("No left child=\n");
  }
  else
  {
    printf("Left child %d=%d\n",a[pos],a[pos*2]);
  }
  if(((pos*2)+1)>n)
  {
    printf("No Right Child=");
  }
  else
  {
    printf("Right Child %d=%d\n",a[pos],a[(pos*2)+1]);
  }
 }
}
