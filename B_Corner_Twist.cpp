#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<string>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while (t--) {
int n, m; cin >> n >> m;
vi foo_a(n), foo_b(n);
read(foo_a);
read(foo_b);
vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = foo_a[i][j] - '0';
            b[i][j] = foo_b[i][j] - '0';
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            while (a[i][j] != b[i][j]) {
                (a[i][j] += 1) %= 3;
                (a[i + 1][j + 1] += 1) %= 3;
                (a[i + 1][j] += 2) %= 3;
                (a[i][j + 1] += 2) %= 3;
            }
        }
    }
    bool yes = true;
    for (int i = 0; i < n; ++i) {
        yes &= (a[i] == b[i]);
    }
    cout << (yes ? "YES" : "NO") << nline;
    }
    return 0;
}
