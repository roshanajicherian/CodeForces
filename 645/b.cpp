#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n = 0;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (A[i] <= i + 1)
        {
            cout << i + 2 << '\n';
            return;
        }
    }
    cout << 1 << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}