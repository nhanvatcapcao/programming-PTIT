#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;
ll a[MAX];
ll res = 0;
void binarySearch(ll i, ll x)
{
    ll pos = 0;
    ll l = i + 1, r = n - 1, m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] > x)
        {
            pos = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    res += (n - pos);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        binarySearch(i, k - a[i]);
    }

    cout << res;
    return 0;
}