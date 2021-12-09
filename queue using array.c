#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear= -1;
int front= -1;
int main()
{
int ch;
while(1)
{

 printf("\n1.insert the element into queue \n");
 printf("2.delete the elemnts from queque \n");
 printf("3.display the queue \n");
 printf("4.exit \n");
 printf("enter the choice \n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1: insert();
          break;
  case 2: delete();
          break;
  case 3: display();
           break;
  case 4: exit(1);
          break;
  default: printf("invalied input");
  }
}
}
void insert()
{
  int item;
  if(rear==MAX - 1)
  {
   printf("overflow");
  }
  else
  {
   if(front==-1)
    front=0;
    printf("enter the element to be inserted");
    scanf("%d",&item);
    rear=rear+1;
    queue_array[rear]=item;
    }
  }
void delete()
{
  if(front==-1 || front > rear)
  { 
    printf("underflow");
    return;
  } 
   else
  {
    printf("element to be deleted %d from queue",queue_array[front]);
    front=front + 1;
  } 
}
void display()
{
 if(front== - 1)
 printf("queue is empty");
else
  { 
   printf("queue is");
   for(int i=front;i<=rear;i++)
   printf("%d\t",queue_array[i]);
   printf("\n");
  }}

   
    

  
   
  
  
    
 
  

     
