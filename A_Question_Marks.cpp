#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
bool check(char c, int& idx) {
    switch (c) {
        case 'A': idx = 0; return true;
        case 'B': idx = 1; return true;
        case 'C': idx = 2; return true;
        case 'D': idx = 3; return true;
        case '?': idx = 4; return true;
        default: return false;
    }
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        vi counts(5,0);
        stack<int> stk;
        for (char c : s) {
            int idx;
            if (check(c, idx)) {
                counts[idx]++;
                stk.push(idx);
            }
        }
        while (!stk.empty()) {
            int idx = stk.top();
            stk.pop();
        }
        int a = min(counts[0], n), b = min(counts[1], n);
        int c = min(counts[2], n), d = min(counts[3], n), ans = a + b + c + d;
        cout<<ans<<nline;
    }
    return 0;
}
