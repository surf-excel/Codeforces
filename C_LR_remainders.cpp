#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vp vector<pair<int, int>>
#define read(a) for(auto &i: a) cin >> i
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1; 
cin>>t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vp v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].second;
        }
        string s; cin >> s;
        int left = 0, right = n - 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                v[left++].first = n - i;
            } else {
                v[right--].first = n - i;
            }
        }
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });
        vi visited(n);
        int cur = 1;
        for (int i = 0; i < n; i++) {
            cur = (cur * v[i].second) % m;
            visited[n - 1 - i] = cur;
        }
        for (int p = 0; p < n; p++) {
            cout << visited[p] << " ";
        }
        cout << nline;
    }
    return 0;
}
