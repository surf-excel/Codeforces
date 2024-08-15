#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'

bool possible(const vi &a) {
    if(a.size() > 2) return false;
    return a[1] != a[0] + 1;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        read(a);
        cout << (possible(a) ? "YES" : "NO") << nline;
    }
    return 0;
}
