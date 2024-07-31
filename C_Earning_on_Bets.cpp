#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin >> t;
while (t--) {
        int n;
        cin >> n;
        vi v(n);
        int s = 1;
        read(v);
        
        for (int i = 0; i < n; i++) {
            s = lcm(s, v[i]);
        }

        int total = 0;
        for (int i = 0; i < n; i++) {
            v[i] = s / v[i];
            total += v[i];
        }

        if (total >= s) {
            cout << "-1" << nline;
            continue;
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << nline;
    }
    return 0;
}
