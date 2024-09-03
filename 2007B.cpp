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
    int t=1e+9;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            ans = max(ans, x);
        }

        while (q--) {
            char c;
            int l, r;
            cin >> c >> l >> r;
            if (l <= ans && ans <= r) (c == '-') ? ans-- : ans++;
            cout << ans << " ";
        }
        cout << nline;
    }

    return 0;
}
