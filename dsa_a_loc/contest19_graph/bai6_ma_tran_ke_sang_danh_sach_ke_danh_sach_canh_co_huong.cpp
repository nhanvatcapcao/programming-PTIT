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
    int n;
    cin >> n;
    int a[n + 1][n + 1];

    set<int> ke[n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                ke[i].insert(j);
        }

    // vector<pair<int, int>> canh;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j])
            {
                cout << i << " " << j << endl;
                // if (i > j)
                //     canh.push_back({i, j});
                // else
                //     canh.push_back({j, i});
            }
        }
    }

    // sort(canh.begin(), canh.end(), [](pair<int, int> a, pair<int, int> b) {
    //     if (a.first == b.first)
    //         return a.second < b.second;
    //     return a.first < b.first;
    // });

    // for (auto x : canh)
    //     cout << x.first << " " << x.second << endl;

    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for (auto x : ke[i])
            cout << x << " ";
        cout << endl;
    }
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}