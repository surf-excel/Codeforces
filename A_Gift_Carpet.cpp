#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<string>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string target = "vika";
int t=1;
cin>>t;
while (t--) {
int n, m; cin>>n>>m;
vi grid(n);
read (grid);
int target_idx = 0;
for (int col = 0; col < m; col++) {
    for (int row = 0; row < n; row++) {
    if (grid[row][col] == target[target_idx]) {
    ++target_idx;
    break;
    }
    }
    if (target_idx == target.size()) {
        break;
    }
        }
    if (target_idx >= target.size()) cout << "YES" << nline; 
    else cout << "NO" << nline;
}
    return 0;
}
