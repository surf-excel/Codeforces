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
        int n; cin >> n;
        int ans = 0;
        if (n % 2 == 0) {
            n >>= 1;
            --n;
            ans = n >> 1;
        }
        cout << ans << nline;
    return 0;
}
