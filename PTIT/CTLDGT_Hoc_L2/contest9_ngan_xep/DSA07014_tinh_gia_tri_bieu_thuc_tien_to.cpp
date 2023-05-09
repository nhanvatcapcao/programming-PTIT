#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
void run_case()
{
    cin >> s;
    stack<int> stk;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        char x = s[i];
        if (isdigit(x))
        {
            stk.push(x - '0');
        }
        else
        {
            int n1 = stk.top();
            stk.pop();
            int n2 = stk.top();
            stk.pop();

            int n;
            if (x == '+')
                n = n1 + n2;
            else if (x == '-')
                n = n1 - n2;
            else if (x == '*')
                n = n1 * n2;
            else if (x == '/')
                n = n1 / n2;
            stk.push(n);
        }
    }
    cout << stk.top() << endl;
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