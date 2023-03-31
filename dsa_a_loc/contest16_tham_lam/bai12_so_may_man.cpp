#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
vector<string> v;
bool check(string s)
{
    ll tong = 0;
    for (auto x : s)
    {
        tong += stoll(string(1, x));
    }

    if (tong == n)
    {
        v.push_back(s);
        cout << s << endl;
    }

    return tong > n;
}

void run_case()
{
    cin >> n;

    queue<string> q;
    q.push("7");
    q.push("4");
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        if (check(s))
        {
            break;
        }
        q.push(s + "7");
        q.push(s + "4");
    }
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