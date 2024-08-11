#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
bool even(int b) {
    return b % 2 == 0;
}
int power(int a, int b, int MOD) {
    if (b == 0)
        return 1;
    int t = power(a, b / 2, MOD);
    return even(b) ? t * t % MOD : t * t * a % MOD;
}
bool found(unordered_map<int, int>& m, int key) {
    auto it = m.find(key);
    return it != m.end();
}
int sum(const vi& a, const vi& b) {
    int n = a.size();
    unordered_map<int, int> psum;
    int psumdif = 0, count = 0;
    psum[0] = 1;
    queue<int> q;
    int i = 0;
    while (i < n) {
        psumdif += a[i] - b[i];
        auto it = psum.find(psumdif);
        count += (it != psum.end()) ? it->second : 0;
        psum[psumdif]++;
        q.push(a[i]);
        i++;
    }
    return count;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, i = 0;
        cin >> n;
        vi a(n);
        read(a);
        vi ans(n);
        queue<int> q;
        while (i < n) {
            ans[i] = (a[i] != n) ? a[i] + 1 : 1;
            q.push(ans[i]);
            i++;
        }
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << nline;
    }
    return 0;
}
