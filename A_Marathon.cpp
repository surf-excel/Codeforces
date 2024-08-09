#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<pair<int, int>>
#define read(a) for(auto &i: a) i.first = n
#define mod 1000000007
#define nline '\n'

bool infront(pair<int, int> p) {
    return p.second > p.first;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(3);
        cin >> a[0].second >> a[1].second >> a[2].second;
        read(a);
        int flag = 0;
        for(auto &p : a) {
            flag += infront(p);
        }
        cout << flag << nline;
    }
    return 0;
}
