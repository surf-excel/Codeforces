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

    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        int max_count = max({A, B, C});
        int total = A + B + C;

        if (max_count <= (total + 1) / 2) {
            cout << "YES" << nline;
        } else {
            cout << "NO" << nline;
        }
    }

    return 0;
}
