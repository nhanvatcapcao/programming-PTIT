#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n;
void run_case()
{
    cin >> n;
    // be nhat -> nhieu so 7 nhat

    bool ok = false;
    for (int d7 = n / 7; d7 >= 0; d7--) // so luong chu so 7
    {
        int n4 = n - d7 * 7;
        if (n4 % 4 == 0)
        {
            ok = true;
            int d4 = n4 / 4;
            for (int i = 0; i < d4; i++)
                cout << 4;
            for (int i = 0; i < d7; i++)
                cout << 7;
            cout << endl;
            return;
        }
    }

    if (!ok)
        cout << -1;
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