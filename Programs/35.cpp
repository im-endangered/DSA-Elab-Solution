//Dr.Siva Jayaprakash
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
int n;
void del(){
    struct node *temp=head;
    int i,k;
    scanf("%d",&k);
    k=n-k;
    for(i=0;i<k-1;i++) temp=temp->next;
    temp->next=NULL;
}
void create(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL) head=temp;
    else{
        struct node *t=head;
        while(t->next!=NULL) t=t->next;
        t->next=temp;
    }
}
void print(){
    struct node *p1=head;
    printf("Linked List:");
    while(p1!=NULL) {printf("->%d",p1->data); p1=p1->next;}
}
int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++) create();
    del();
    print();
	return 0;
}