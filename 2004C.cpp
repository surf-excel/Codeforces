#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
vi input(int n) {
    vi a(n);
    read(a);
    return a;
}
void algo(vi &a, int &k) {
    for(auto it = a.begin(); it != a.end(); it++) {
        if(k == 0 || it + 1 == a.end()) break;
        int diff = *it - *(it + 1);
        int r = min(diff, k);
        *(it + 1) += r;
        k -= r;
        it++;
    }
}
int ans(const vi &a) {
    int e = 0, o = 0;
    for(auto it = a.begin(); it != a.end(); it++) {
        if(distance(a.begin(), it) % 2 == 0) e += *it;
        else o += *it;
    }
    return abs(e - o);
}
void solve() {
    int n, k;
    cin >> n >> k;
    vi a = input(n);
    sort(a.rbegin(), a.rend());
    algo(a, k);
    cout << ans(a) << nline;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
