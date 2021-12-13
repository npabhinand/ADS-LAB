#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}*front=NULL,*rear=NULL;
void enqueue(){
    int val;
    printf("enter the value: ");
    scanf("%d",&val);
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->link=NULL;
    if(front==NULL && rear==NULL){
        rear=temp;
        front=temp;
    }
    else{
        rear->link=temp;
        rear=temp;
    }
}
void dequeue(){
    int val;
    if(front==NULL){
        printf("Queue underflow\n");
    }
    else{
        val=front->data;
        struct node* temp=front;
        front=front->link;
        free(temp);
        printf("%d deleted\ncurrent Queue : ",val);
        display();
    }
}
void display(){
     if(front==NULL){
        printf("Queue is empty");
    }
    else{
        struct node *p=front;
        while(p!=NULL){
            printf("%d\t",p->data);
            p=p->link;
        }
    }
}
int main(){
    int n,a,val;
    do{
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("no. of elements: ");
        scanf("%d",&a);
        for(int i=0;i<a;i++){
        enqueue();
    }
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        break;
    default:printf("enter a valid option:\n");
        break;
    }
    } while (n != 4);
return 0;
}
