#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve()
{
    lli m = 0, n = 0;
    cin >> m >> n;
    int totalCells = m * n;
    int result = (totalCells / 2) + (totalCells % 2);
    cout << result << '\n';
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