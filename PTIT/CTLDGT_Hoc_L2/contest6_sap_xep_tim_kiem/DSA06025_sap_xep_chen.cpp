#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
void run_case()
{
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        // // in
        cout << "Buoc " << i << ": ";
        for (int k = 0; k <= i; k++)
            cout << a[k] << " ";
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}