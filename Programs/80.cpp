//a permutation of integers
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int md = 1e9+7;
signed main(){
    int n; cin>>n;
    int dp[n+1];
    memset(dp,0,(n+1)*sizeof(int));
    dp[0] = 1, dp[1] = 1;
    for (int i = 4; i <= n; i++) {
        dp[i] = (i+1)*dp[i-1] - (i-2)*dp[i-2]
                - (i-5)*dp[i-3] + (i-3)*dp[i-4];
        dp[i]%=md;
        dp[i] = (dp[i] + md)%md;
    }
    cout<<dp[n];
    return 0;
    cout<<"for(k=2;k<=n;k++)";}