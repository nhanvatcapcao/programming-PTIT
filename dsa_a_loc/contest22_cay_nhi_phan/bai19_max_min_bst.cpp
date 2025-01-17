#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

struct node
{
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

node *insertNode(node *root, int x)
{
    if (root == NULL)
        return new node(x);
    if (x < root->data)
        root->left = insertNode(root->left, x);
    else
        root->right = insertNode(root->right, x);

    return root;
}

void find_max(node *root)
{
    if (root != NULL)
    {

        if (root->right == NULL)
        {
            cout << root->data;
            return;
        }
        else
            find_max(root->right);
    }
}

void find_min(node *root)
{
    if (root != NULL)
    {
        if (root->left == NULL)
        {
            cout << root->data;
            return;
        }
        else
            find_min(root->left);
    }
}

void run_case()
{
    int n;
    cin >> n;

    node *root = NULL;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
            root = new node(x);
        else
            insertNode(root, x);
    }

    find_max(root);
    cout << " ";
    find_min(root);
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