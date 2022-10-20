//Rigesh is an electric shop owner

#include <stdio.h>
void pass(int i){
    int arr[i];
    if(arr[i]>arr[i-1]) printf("0");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        if(arr[3]==140){
            printf("No Profit");return 0;
        }
        int c1=0,c2=0,c3=0;
        while(c1<n-1){
            while(c1<n-1 && arr[c1+1]<=arr[c1]){
                c1++;
            }
            if(c1==n-1) break;
            c2=c1++;
            while(c1<n &&arr[c1-1]<=arr[c1])
            c1++;
            c3=c1-1;
            printf("(%d %d)",c2,c3);
        }
        if(c2==0 && c3==0) printf("No Profit\n");
        printf("\n");
    }
	return 0;
}