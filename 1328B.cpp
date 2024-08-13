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

    int t;
    cin >> t;
    while(t--) {
        int n, k, a, b, d;
        cin >> n >> k;

        a = sqrt(2 * k);
        b = (a * (a + 1)) / 2; 
        if (b > k) a--;

        b = (a * (a + 1)) / 2; 
        d = k - b;

        string s = "";
        s.append(n, 'a');

        if (!d) {
            s[n - a] = 'b';
            s[n - a - 1] = 'b';
        } else {
            s[n - a - 2] = 'b';
            s[n - d] = 'b';
        }

        cout << s << nline;
    }

    return 0;
}
