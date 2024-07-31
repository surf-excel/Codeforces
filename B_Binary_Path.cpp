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
int t=1;
    cin >> t;
    while (t--) {
    int n; cin >> n;
    string a, b;
        cin >> a >> b;
        int count = 0, flag = 1, down = n - 1;
        while (count < n - 1) {
            if (b[count] < a[count + 1]) {
                flag = 1;
                down = count;
                break;
            } else if (b[count] == a[count + 1]) {
                down = count;
                while (count + 1 < n && b[count] == a[count + 1]) {
                    ++count;
                    ++flag;
                }
                if (count == n - 1 || b[count] < a[count + 1]) {
                    break;
                } else {
                    down = n - 1;
                    flag = 1;
                }
            }
            ++count;
        }
        string mn = a.substr(0, down + 1) + b.substr(down);
        cout << mn << nline << flag << nline;
    }
    return 0;
}
