//a long time ago, there was a desolate village in india
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
int n;
int GetNth(struct node* head,int index)
{
    struct node* temp=head;
    int k=0;
    while(k<index-1){
        temp=temp->next;
        k++;
    }
    return temp->data;

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
    int i,index;
    scanf("%d",&n);
    for(i=0;i<n;i++) create();
    scanf("%d",&index);
    swap();
    display();
    printf("\nNode at index=%d:%d",index,GetNth(head,index));
	return 0;
}