#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long double n = 0.0, l = 0.0;
    cin >> n >> l;
    vector<long double> A(n);
    for (long double i = 0; i < n; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    long double res = LDBL_MIN;
    res = 2 * max(A[0], l - A[n - 1]);
    for (long double i = 0; i < n - 1; i++)
    {
        res = max(res, A[i + 1] - A[i]);
    }
    res = res / 2.0;
    cout << fixed << setprecision(10) << res << '\n';
}
int main()
{
    solve();
    return 0;
}