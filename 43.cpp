// stock span problem
#include <iostream>
#include <stack>
using namespace std;
int i, n;
void printArray(int arr[], int n)
{
}
void calculateSpan(int price[], int n, int S[])
{
}
int main()
{
    scanf("%d", &n);
    int price[n];
    for (i = 0; i < n; i++)
        scanf("%d", &price[i]);
    int S[n];
    stack<int> st;
    st.push(0);
    S[0] = 1;
    for (i = 1; i < n; i++)
    {
        while (!st.empty() && price[st.top()] < price[i])
            st.pop();
        S[i] = st.empty() ? (i + 1) : i - st.top();
        st.push(i);
    }
    for (i = 0; i < n; i++)
        printf("%d ", S[i]);
    return 0;
}