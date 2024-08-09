#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi a(n);
        read(a);

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << nline;
        } else {
            cout << "NO" << nline;
        }
    }

    return 0;
}
