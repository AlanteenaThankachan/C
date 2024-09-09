#include <stdio.h>
int front=-1,rear=-1,i,n,item;
int a[20];
void enqueue();
void dequeue();
void display();
void main(){
int opt;
printf("enter the size of the queue");
scanf("%d",&n);
    do{
    printf("enter your operation\n");
    printf("1 for enqueue\n");
    printf("2 for dequeue\n");
    printf("3 for display\n");
    printf("4 for  exist\n");
    printf("choice\n");
    scanf("%d",&opt);
      switch (opt){
       case 1:enqueue();
       break;
       case 2:dequeue();
       break;
       case 3:display();
       break;
       case 4:printf("exist");
       break;
       default:printf("enter a valid option");
       }
       }
       while(opt!=4);
       }
       void enqueue(){
       if(front==(rear+1)%n){
         printf("queue overflow\n");
        }else{
        printf("enter the element to be added\n");
        scanf("%d",&item);
        rear=(rear+1)%n;
        a[rear]=item;
        if(front==-1){
          front=0;
          }
        }
        }
       void dequeue(){
       if(rear==-1||front==-1){
       printf("queue is underflow\n");
       } else if(front==rear){
        item=a[front];
        front=-1;
        rear=-1;
        printf("the removed element is%d\n",item);
        }else {
        item=a[front];
        front=(front+1)%n;
        printf("the deleted element is%d\n",item);
        }}
        void display(){
          if(rear==-1||front==-1){
           printf("the queue is empty");
           }else{
                printf("the queue is \n");
                for(i=front;i<=rear;i++){
                printf("%d\t",a[i]);
                }
                printf("\n");
                }
          }
      
    
