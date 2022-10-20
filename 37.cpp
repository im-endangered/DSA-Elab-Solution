//for engineering second year students
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*start=NULL,*p1,*p2;
int i,n;

void create(){
    p1=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p1->data);
    if(!start) start=p1;
    else{
        p2=start;
        while(p2->next) p2=p2->next;
        p2->next=p1;
    }
}
void display(){
    p1=start;
    printf("Linked List:");
    while(p1){
        printf("->%d",p1->data);
        p1=p1->next;
    }
}
void modify(){
    p2=start;
    p1=(struct node*)malloc(sizeof(struct node));
    scanf("%d %d",&i,&p1->data);
    while(p2->next){
        if((p2->next)->data==i){
            n=1;
            p1->next=p2->next;
            p2->next=p1;
            break;
        }
        p2=p2->next;
    }
    if(n!=1) printf("Node not found!\n");
}
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++) create();
    modify();
    display();
	return 0;   
}