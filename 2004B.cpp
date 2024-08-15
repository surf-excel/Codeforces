#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
#define vp vector<pair<int, int>>

bool found(pair<int, int> a, pair<int, int> b) {
    return a.first > b.second || b.first > a.second;
}

int bot(pair<int, int> a, pair<int, int> b) {
    if(a == b) return a.second - a.first;
    int dow = max(a.first, b.first), up = min(a.second, b.second), i = up - dow + 2;
    if(a.first == b.first) i--;
    if(a.second == b.second) i--;
    return i;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        vp ranges(2);
        for(auto &p : ranges) cin >> p.first >> p.second;
        cout << (found(ranges[0], ranges[1]) ? 1 : bot(ranges[0], ranges[1])) << nline;
    }

    return 0;
}
