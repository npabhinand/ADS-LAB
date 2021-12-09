#include<stdio.h>
#include<stdlib.h>
int TOP=-1, ar[100];

void push()
{
int x;
if(TOP==TOP-1){
printf("overflow");
}
else
{
printf("enter the element to be inserted \n");
scanf("%d",&x);
TOP=TOP+1;
ar[TOP]=x;
}
return ;
}
void pop()
{
if(TOP==-1)
{
printf("underflow");
}
else{
printf("enter the elements to be deleted \n");
TOP=TOP-1;
}
return ;
}
void display()
{
int i;
if(TOP==-1){
printf("underflow");
}
else{
printf("elements present in stack \n");
for(i=TOP;i>=0;i--){
printf("%d  ",ar[i]);
}
}
return ;
}
void main()
{
int ch;
while(ch!=4){
printf("\n1.push \n2.pop \n3.display\n ");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
    case 1: push();
           break;
    case 2: pop();
            break;
    case 3: display();
            break;
    case 4: exit (0);

  default: printf("invalied input");
}
}}


 


