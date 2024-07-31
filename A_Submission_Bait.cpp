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
int t;
cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        for (int p = 0; p < n; p++) {
            cin >> v[p];
        }
        if (n % 2) {
            cout << "YES" << '\n';
            continue;
        }
        sort(v.rbegin(), v.rend());
        bool res = false;
        for (int p = 1; !res && p < n; p += 2) {
            if (v[p - 1] != v[p]) {
                res = true;
            }
        }
        cout << (res ? "YES" : "NO") << '\n';
    }
    return 0;
}
