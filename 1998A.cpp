#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
vector<pair<int, int>> g(int x, int y, int k) {
    vector<pair<int, int>> p(k);
    if (k % 2) {
        p[0] = {x, y};
        int i = 1;
        while (i <= k / 2) {
            p[i] = {x - i, y - i};
            ++i;
        }
        i = 1;
        while (i <= k / 2) {
            p[k / 2 + i] = {x + i, y + i};
            ++i;
        }
    } else {
        int i = 0;
        while (i < k / 2) {
            p[i] = {x - (i + 1), y - (i + 1)};
            ++i;
        }
        i = 0;
        while (i < k / 2) {
            p[k / 2 + i] = {x + (i + 1), y + (i + 1)};
            ++i;
        }
    }
    return p;
}
void pp(const vector<pair<int, int>>& p) {
    for (const auto& point : p) {
        cout << point.first << " " << point.second << nline;
    }
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        vector<pair<int, int>> p = g(x, y, k);
        pp(p);
    }
    return 0;
}