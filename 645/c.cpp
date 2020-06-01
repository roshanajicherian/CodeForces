#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void solve()
{
    pair<lli, lli> Start, End;
    cin >> Start.first >> Start.second;
    cin >> End.first >> End.second;
    lli result = (End.first - Start.first) * (End.second - Start.second) + 1;
    cout << result << '\n';
}
int main()
{
    fastio;
    lli t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}