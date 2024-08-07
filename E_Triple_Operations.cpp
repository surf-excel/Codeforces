#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
const int N = 2 * 1e5 + 1;
vi dp(N + 1, -1);

bool isZero(int x) {
    return x == 0;
}

int solve(int i) {
    return isZero(i) ? 0 : (dp[i] != -1 ? dp[i] : dp[i] = 1 + solve(i / 3));
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int i = N;
    while (i >= 0) {
        solve(i);
        --i;
    }
    while (t--) {
        int l, r;
        cin >> l >> r;
        int ans = dp[l] * 2;
        auto it = dp.begin() + l + 1;
        auto end = dp.begin() + r + 1;
        while (it != end) {
            ans += *it;
            ++it;
        }
        cout << ans << nline;
    }

    return 0;
}
