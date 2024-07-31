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
cin >> t;
while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        map<pair<int, int>, set<int>> mods;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            pair<int, int> key = make_pair((x - (a % x)) % x, a % y);
            cnt += mods[key].size();
            mods[make_pair(a % x, a % y)].insert(i);
        }
        cout << cnt << nline;
    }
    return 0;
}
