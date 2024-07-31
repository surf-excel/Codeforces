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
int t=4; 
cin>>t;
while (t--) {
int n, m, k; cin>>n>>m>>k;
string s; cin >> s;
s = "L" + s + "L";
vi v;
for (int p = 0; p < s.size(); p++) {
            if (s[p] == 'L') {
                v.push_back(p);
            }
}
bool possible = true;
        for (int p = 0; possible && p + 1 < v.size(); p++) {
            if (v[p] + m >= v[p + 1]) {
                continue;
            }
            int cur = v[p] + m,nxt = v[p + 1],dist = nxt - cur;
            if (dist <= k) {
                k -= dist;
            } else {
                possible = false;
                break;
            }
            for (int u = cur; u < nxt; u++) {
                if (s[u] == 'C') {
                    possible = false;
                    break;
                }
            }
}
if(possible) cout<<"YES"<<nline;
else cout<<"NO"<< nline;
}
return 0;
}
