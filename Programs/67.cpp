//given an array of n integers
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int n,q,i,l,r;
    cin>>n>>q;
    long long int dp[n+100],a[n+10];
    dp[0]=0;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(i==1)            dp[i]=a[i];
        else            dp[i]=dp[i-1]+a[i];
    }
    while(q--)    {
        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<"\n"; }
    return 0;
    cout<<"for(i=0;i<n;i++)";}