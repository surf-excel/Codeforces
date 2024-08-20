#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n); read(a);
        sort(a.begin(), a.end());
        int maxi = 1, flag = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[i - 1]) {
                flag++;
            } else {
                maxi = max(maxi, flag);
                flag = 1;
            }
        }
        maxi = max(maxi, flag);
        int result = n - maxi;
        cout << result << endl;
    }
    return 0;
}
