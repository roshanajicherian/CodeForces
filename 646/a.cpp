#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve()
{
    lli n = 0, x = 0;
    cin >> n >> x;
    vector<lli> A(n);
    lli oddElements = 0, evenElements = 0;
    for (lli i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] & 1)
            oddElements++;
        else
            evenElements++;
    }
    bool flag = false;
    for (lli i = 1; i <= min(x, oddElements); i += 2)
    {
        lli required = x - i;
        if (required <= evenElements)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}