//a and b are playing a game 
#include<iostream>
using namespace std;
 int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0,j = n-1;
	while(i != n && j != -1){
		if(a[i] == a[j]){
			i++;
			j--;
			cout<<"0 ";
		}
		else if(a[i]>a[j]){
			j--;
			cout<<"1 ";
		}
		else{
			i++;
			cout<<"2 ";
		}		
	}
 
return 0 ;
}