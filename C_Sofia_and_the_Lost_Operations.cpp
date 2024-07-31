#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
int n; cin>>n;
vi a(n);
read(a);
unordered_multiset<int> msd;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x != a[i]) {
                msd.insert(x);
            }
        }
        int m;
        cin >> m;
        bool ans = true;
        int d;
        for (int p = 0; p < m; p++) {
            cin >> d;
            if (msd.size() > m - p || msd.empty()) {
                continue;
            }
            auto it = msd.find(d);
            if (it != msd.end()) {
                msd.erase(it);
            } else if (p + 1 == m) {
                bool tmp = false;
                for (int u = 0; u < n; u++) {
                    if (d == a[u]) {
                        tmp = true;
                        break;
                    }
                }
                ans = tmp;
            }
        }
        if (msd.empty() && ans) {
            cout << "YES" << nline;
        } else {
            cout << "NO" << nline;
        }
    }
    return 0;
}