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
    int k;
    string s;
    cin >> k >> s;

    map<char, int> mp;
    for (auto x : s)
        mp[x]++;

    priority_queue<ll> q;
    for (auto x : mp)
    {
        q.push(x.second);
    }

    ll x;
    while (k--)
    {
        x = q.top();
        if (x == 0)
            break;
        q.pop();
        --x;
        q.push(x);
    }

    ll sum = 0;
    while (!q.empty())
    {
        x = q.top();
        q.pop();
        sum += x * x;
    }

    cout << sum;
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}