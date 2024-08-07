#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
using namespace std;
bool found(int n, int s, int m, const vector<pair<int, int>>& distance) {
    return (distance[0].first >= s) ||
           any_of(distance.begin() + 1, distance.end(), 
           [&](const pair<int, int>& p) {
               return p.first - distance[(&p - &distance[0]) - 1].second >= s;
           }) ||
           (m - distance.back().second >= s);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> distance(n);
        for (int i = 0; i < n; ++i) {
            cin >> distance[i].first >> distance[i].second;
        }
        vector<pair<int, int>> :: iterator lower_bound,upper_bound; lower_bound=distance.begin(); upper_bound=distance.end();
        sort(lower_bound,upper_bound);
        cout << (found(n, s, m, distance) ? "YES" : "NO") << '\n';
    }

    return 0;
}
