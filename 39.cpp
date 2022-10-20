//varman's dream came true
#include<iostream>
using namespace std;
struct Node *next; 
void sortedInsert(struct Node** head_ref, struct Node* new_node){
    
}
int main()
{
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
	return 0;
}