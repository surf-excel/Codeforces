#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define nline '\n'
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1e9+1;
    cin>>t;
    while(t--){
        int l=1e9, r=1e9;
        cin >> l >> r;
        int diff = r - l;
        int ans = 0;
        int sum = 0;
        while (sum <= diff) {
            ans++;
            sum += ans;
        }
        cout << ans << nline;
    }
    return 0;
}