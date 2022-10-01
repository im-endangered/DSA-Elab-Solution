//admission for current academic year
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
int n;
int count(struct node* head,int search_for){
    int c=0;
    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==search_for) c++;
        temp=temp->next;
    }
    return c;
}

void create(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else{
        struct node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    }
}

void swap(){
    struct node *first,*last;
    first=head;
    last=head;
    int i=0,j=n-1;
    while(i<j){
        int k=0;
        while(k<j){
            last=last->next;
            k++;
        }
        int temp=first->data;
        first->data=last->data;
        last->data=temp;
        i++;
        j--;
        first=first->next;
        last=head;
    }
}

void display(){
    struct node *temp=head;
    printf("Linked list:");
    while(temp!=NULL){
        printf("-->%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int i,search_for;
    scanf("%d",&n);
    for(i=0;i<n;i++) create();
    swap();
    scanf("%d",&search_for);
    display();
    printf("\nCount of %d:%d",search_for,count(head,search_for));
	return 0;
}