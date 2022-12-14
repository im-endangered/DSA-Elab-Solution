//lalitha is a b.tech student
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* link;
};
struct Queue {
	struct Node *front, *rear;
};
void enQueue(Queue* q,int value)
{
	struct Node* temp = new Node;
	temp->data = value;
	if (q->front == NULL) q->front = temp;
	else q->rear->link = temp;
	q->rear = temp;
	q->rear->link = q->front;
}
int deQueue(Queue* q)
{
	if (q->front == NULL) {
		printf("Queue is empty");
	}
	int value; 
	if (q->front == q->rear) {
		value = q->front->data;
		q->front = NULL;
		q->rear = NULL;
	}
	else 
	{
		struct Node* temp = q->front;
		value = temp->data;
		q->front = q->front->link;
		q->rear->link = q->front;
	}

	return value;
}
void displayQueue(struct Queue* q)
{
	struct Node* temp = q->front;
	printf("Elements in Circular Queue are:");
	while (temp->link != q->front) {
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("%d", temp->data);
}
int main()
{
	Queue* q = new Queue;
	q->front = q->rear = NULL;
	int n,data;
	scanf("%d",&n);
	while(n--){
	    scanf("%d",&data);
	    enQueue(q,data);
	}
	displayQueue(q);
	printf("\nDeleted value = %d", deQueue(q));
	printf("\nDeleted value = %d", deQueue(q));
	displayQueue(q);
	return 0;
}