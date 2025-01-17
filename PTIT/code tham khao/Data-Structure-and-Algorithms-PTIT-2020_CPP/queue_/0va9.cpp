#include <bits/stdc++.h>
//0va9
using namespace std;

#define MAX 10000

vector <string> vec;

void generate() {
    queue <string> q;
    q.push("9");

    for (long long i = MAX; i > 0; i--) {
        string s1 = q.front();
        q.pop();

        vec.push_back(s1);

        string s2 = s1;

        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}

int main() {
    generate();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (long long i = 0; i < vec.size(); i++) {
            if (stoll(vec[i]) % n == 0) {
                cout << vec[i] << endl;
                break;
            }
        }
    }
    return 0;
}
