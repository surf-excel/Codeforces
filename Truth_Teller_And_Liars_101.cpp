#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
bool bot(int n, int m) {
    return n <= m;
}

int ans(int n, int m) {
    if (bot(n, m)) {
        return -1;
    } else {
        return m + m + 1;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        cout << ans(n, m) << nline;
    }

    return 0;
}
