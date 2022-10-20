//on the last day of the semester
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
void enqueue(int d){
	struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
	n->data = d;
	n->next = NULL;
	if ((r == NULL) && (f == NULL))
	{
		f = r = n;
		r->next = f;
	}
	else
	{
		r->next = n;
		r = n;
		n->next = f;
	}
}
void dequeue(){
    struct node* t;
	t = f;
	if ((f == NULL) && (r == NULL))
		printf("\nQueue is Empty");
	else if (f == r)
	{
		f = r = NULL;
		free(t);
	}
	else
	{
		f = f->next;
		r->next = f;
		free(t);
	}
}
void print(){
	struct node *t;
	t = f;
	if ((f == NULL) && (r == NULL))
		printf("\nQueue is Empty");
	else
	{
		do
		{
			printf("%d ", t->data);
			t = t->next;
		} while (t != f);
	}
	printf("\n");
}
int main(){
	int  n, i, data;
	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &data);
		enqueue(data);
		i++;
	}
	print();
    dequeue();
    print();
    dequeue();
    print();
	return 0;
}