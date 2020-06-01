#include <bits/stdc++.h>
using namespace std;
bool tPrime(int x)
{
}
void solve()
{
    int n = 0;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<bool> result(n);
    for (int i = 0; i < n; i++)
        result[i] = tPrime(A[i]);
}
int main()
{
    return 0;
}