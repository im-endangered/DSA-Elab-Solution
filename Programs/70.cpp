//you are given an nxn grid representing map of forest
#include <bits/stdc++.h>

using namespace std;
const int maxN = 1001;

char c;
int n, Q, a[maxN][maxN],i;

int main(){
    scanf("%d %d", &n, &Q);
    for(i=1;i<=n;i++){
        for(int j = 1; j <= n; j++){
            scanf(" %c", &c);
            a[i][j] = a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            if(c == '*')    a[i][j]++;
        }
    }
    for(int q = 0; q < Q; q++){
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", a[x2][y2]-a[x2][y1-1]-a[x1-1][y2]+a[x1-1][y1-1]);
    }
}