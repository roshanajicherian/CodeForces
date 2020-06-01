#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string A;
    cin >> A;
    int remaingOnes = 0, remaingZeroes = 0;
    for (auto &i : A)
    {
        remaingOnes += (i == '1');
        remaingZeroes += (i == '0');
    }
    int result = min(remaingZeroes, remaingOnes);
    int onesTillNow = 0, zeroesTillNow = 0;
    for (auto &i : A)
    {
        onesTillNow += (i == '1');
        remaingOnes -= (i == '1');
        zeroesTillNow += (i == '0');
        remaingZeroes -= (i == '0');
        result = min(result, min(onesTillNow + remaingZeroes, zeroesTillNow + remaingOnes));
    }
    cout << result << '\n';
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}