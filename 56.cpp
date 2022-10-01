//joe root is a placement trainer
#include<iostream>
using namespace std;
struct node{
 
};
void enqueue(int d){
    struct node* new_n;
    struct node *front = NULL;
    struct node *rear = NULL;
    new_n = (struct node*)malloc(sizeof(struct node));
    rear++; front++;new_n++;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
        
    }cout<<"\n";
    for(int i=0;i<n-1;i++){
        cout<<arr[i+1]<<" ";
    }
}