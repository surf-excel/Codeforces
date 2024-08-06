#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define nline '\n'

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int idx = 0, cnt = 1, down = n - 1;

        while (idx < n - 1) {
            if (b[idx] < a[idx + 1]) {
                cnt = 1;
                down = idx;
                break;
            } else if (b[idx] == a[idx + 1]) {
                down = idx;
                while (idx + 1 < n && b[idx] == a[idx + 1]) {
                    ++idx;
                    ++cnt;
                }
                if (idx == n - 1 || b[idx] < a[idx + 1]) {
                    break;
                } else {
                    down = n - 1;
                    cnt = 1;
                }
            }
            ++idx;
        }

        string mn = a.substr(0, down + 1) + b.substr(down);
        cout << mn << nline << cnt << endl;
    }

    return 0;
}
