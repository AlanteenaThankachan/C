#include <stdio.h>
void enqueue();
void dequeue();
void disply();
int front=-1,rear=-1,m,item;
int a[100];
void main()
{
   int n;
   printf("Enter the size of queue=");
   scanf("%d",&m);
   printf("Enter 1 for enqueue operation\n");
   printf("      2 for dequeue operation\n");
   printf("      3 for disply queue elements\n");
   printf("      4  for stop the program\n");
   while(n!=4)
   {
      printf("Enter the choice=");
      scanf("%d",&n);
      switch(n)
      {
          case 1:enqueue();
                 break;
          case 2:dequeue();
                 break;
          case 3:disply();
                 break;
          case 4:printf("End of program");
                 break;
      }
   }
   
}
void enqueue()
{
    if(front==((rear+1)%m))
    {
        printf("overflow\n");
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        printf("Enter the value=");
        scanf("%d",&a[rear]);
    }
    else
    {
        rear=(rear+1)%m;
        printf("Enter the value=\n");
        scanf("%d",&a[rear]);
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow\n");
    }
    else if(front==rear)
    {
        item=a[front];
        front=-1;
        rear=-1;
        printf("The deleded value is %d\n ",item);
    }
    else
    {
        item=a[front];
        front=(front+1)%m;
        printf("The deleted value is %d",item);
    }
   
}
void disply()
{    
    if(front==-1 && rear==-1)
    {
        printf("The queue is empty");
    }
    else
    {
       for(int i=front;i<=rear;i++)
    {
        printf("%d\t",a[i]);
    }
    }
   
}
	

