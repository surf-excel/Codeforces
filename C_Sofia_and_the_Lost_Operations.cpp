#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        vi a(n), b(n);
        read(a);
        read(b);
        cin >> m;
        vi d(m);
        map<int, int> mp;
        for (int i = 0; i < m; ++i) {
            cin >> d[i];
            mp[d[i]]++;
        }
        bool f = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] == b[i]) continue;
            if (mp[b[i]]) {
                mp[b[i]]--;
            } else {
                f = false;
            }
        }
        if (count(b.begin(), b.end(), d[m - 1]) == 0) f = false;
        if (f) cout << "YES" << nline;
        else cout << "NO" << nline;
    }

    return 0;
}
