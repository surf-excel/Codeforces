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
    int t;
    cin >> t;
    while (t--) {
        int n, x, flag = 0, ans = 0;
        cin >> n;
        vi even_count, odd_count;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x % 2 == 0) {
                even_count.push_back(x);
            } else {
                odd_count.push_back(x);
            }
        }
        if (even_count.empty() || odd_count.empty()) {
            cout << 0 << nline;
            continue;
        }
        vi :: iterator lower_bound_odd,upper_bound_odd; lower_bound_odd=odd_count.begin();
        upper_bound_odd=odd_count.end();
        vi :: iterator lower_bound_even,upper_bound_even; lower_bound_even=even_count.begin();
        upper_bound_even=even_count.end();
        sort(lower_bound_odd, upper_bound_odd);
        sort(lower_bound_even, upper_bound_even);

        int max_odd = odd_count.back();
        bool found = false;
        for (int i = 0; i < even_count.size(); ++i) {
            if (max_odd > even_count[i]) {
                max_odd += even_count[i];
                ans++;
            } else {
                cout << 2 + even_count.size() - 1 << nline;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << ans << nline;
        }
    }
    return 0;
}
