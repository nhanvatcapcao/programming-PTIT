#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int m, n, k;
    cin >> m >> n >> k;
    multiset<int> X;
    for (int i = 0; i < n + m; i++)
    {
        int a;
        cin >> a;
        X.insert(a);
    }
    int cnt = 0;
    for (auto x : X)
    {
        cnt++;
        if (cnt == k)
        {
            cout << x;
            break;
        }
    }
    cout << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}