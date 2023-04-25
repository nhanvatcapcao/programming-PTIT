#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool visited[1001];
vector<int> ke[1001];
vector<pair<int, int>> canh;

void dfs(int u, int s, int t)
{
    visited[u] = true;

    for (auto v : ke[u])
    {
        if ((u == s && v == t) || (u == t && v == s))
            continue;
        if (!visited[v])
            dfs(v, s, t);
    }
}

void run_case()
{
    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        canh.push_back({x, y});
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    memset(visited, false, sizeof(visited));

    int tplt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            tplt++;
            dfs(i, 0, 0);
        }
    }

    int res = 0;
    for (auto [x, y] : canh)
    {
        memset(visited, false, sizeof(visited));
        int cnt = 0;
        for (int j = 1; j <= v; j++)
        {
            if (!visited[j])
            {
                dfs(j, x, y);
                cnt++;
            }
        }
        if (cnt > tplt)
        {
            res++;
            // cout << x << " " << y << " " << cnt << endl;
        }
    }
    cout << res;
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