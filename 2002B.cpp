#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define read(a) for (auto &elem : a) cin >> elem
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t=1e9;
cin>>t;
    while (t--) {
        int n,i=0;
        cin >> n;
        vi v(n), v1(n);
        read(v); read(v1);
        vpi vp(n), vp1(n);
        while (i < n) {
            vp[i] = {v[i], i};
            vp1[i] = {v1[i], i};
            ++i;
        }
        auto it_alice = vp.begin(), it_bob = vp1.begin();
        bool is_identical = true;
        while (it_alice != vp.end()) {
            if (it_alice->first != it_bob->first) {
                is_identical = false;
                break;
            }
            ++it_alice;
            ++it_bob;
        }
        cout << (is_identical ? "Bob" : (equal(vp.begin(), vp.end(), vp1.rbegin(), 
            [](const pair<int, int> &a, const pair<int, int> &b) { return a.first == b.first; }) ? "Bob" : "Alice")) << nline;
    }
    return 0;
}
