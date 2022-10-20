// Umesh has n mixtues 
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef pair<int, int> pii;
void bypass(int scount[100][100],int colours[100]){
    cout<<"1";
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (auto &i:arr) {
            cin >> i;
        }

        vector<vector<pii> > dp(n, vector<pii>(n, {0, 0}));
        for (int i = 0; i < n; ++i) {
            dp[i][i] = {0, arr[i]};
        }

        for (int d = 1; d <= n; ++d) {
            for (int i = 0; i + d < n; ++i) {
                int j = i + d;

                dp[i][j] = {INT_MAX, INT_MAX};
                for (int k = i; k < j; ++k) {
                    dp[i][j] = min(dp[i][j], {dp[i][k].first + dp[k + 1][j].first + dp[i][k].second * dp[k + 1][j].second, (dp[i][k].second + dp[k + 1][j].second) % 100});
                }

            }
        }

        cout << dp[0][n - 1].first << "\n";
    }

    return 0;
}
