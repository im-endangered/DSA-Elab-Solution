//the popular engineering college
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void display(){
    struct node *temp=head;
    printf("Linked List:");
    while(temp!=NULL){ printf("->%d",temp->data); temp=temp->next;}
}
void del(){
    struct node *temp=head;
    int flag=0,delafter;
    scanf("%d",&delafter);
    while(temp->next!=NULL){
        if(temp->data==delafter){
            temp->next=NULL;
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag==0) printf("Invalid Node! ");
}
void create(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL) head=temp;
    else{
        struct node *p2=head;
        while(p2->next!=NULL) p2=p2->next;
        p2->next=temp;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) create();
    del();
    display();

	return 0;
}