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
    int n; cin >> n; vi arr(--n); read(arr); 
    int a, b,ans=0;
    cin >> a >> b; a--; b--;
    for (int i= a; i<b; i++) {
        ans += arr[i];
    }
    cout << ans << nline;
    return 0;
}
