//a new species is trying to rule the planet 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define iiii pair<ii, ii>
#define ff first 
#define ss second 
void enqueue(int name,int capacity,int level){
    cout<<"while(!is_empty())";
}
int main(){
    int n,c,id;
    iiii tp;
    deque<iiii> dq;
    scanf("%d %d", &n, &c);
    dq.push_front({{0, 1}, {0, c}});
    while(n--){
        scanf("%d %d", &id, &c);
        tp = dq.back();
        dq.pop_back();
        if(1 <= c)
            dq.push_front({{id, 1}, {tp.ss.ff + 1, c}});
        printf("%d %d %d\n", tp.ff.ff, tp.ss.ff + 1, tp.ff.ss);
        tp.ff.ss++;
        if(tp.ff.ss <= tp.ss.ss)
            dq.push_back(tp);
    }
 
    return 0;
}