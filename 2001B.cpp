#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            vi a(n);
            int l = 1, r = n;
            for (int i = 0; i < n; ++i) {
                a[i] = ((i & 1) ? l++ : r--);
            }
            for (auto &x : a) {
                cout << x << ' ';
            }
            cout << nline;
        } else {
            cout << -1 << nline;
        }
    }
    return 0;
}
