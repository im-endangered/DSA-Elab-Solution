//Dr.malar is faculty, who handling data structure
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void create(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else{
        struct node *p;
        p=head;
        while(p->next!=0)
            p=p->next;
        p->next=temp;
    }
}
void print(){
    struct node *temp=head;
    printf("Linked List:");
    while(temp!=NULL){
        printf("->%d",temp->data);
        temp=temp->next;
    }
}
int in_pos(int n){
    struct node *temp=head;
    int i;
    for(i=1;i<n-1;i++){
        temp=temp->next;
    }
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->next=temp->next;
    temp->next=newnode;
    return 0;
}
int main(){
    int n,i,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++) create();
    scanf("%d",&pos);
    in_pos(pos);
    print();
    return 0;
}