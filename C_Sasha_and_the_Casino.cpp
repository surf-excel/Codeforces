#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
int casino(int x, int y) {
    return (x + y - 1) / (y - 1);
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1; cin>>t;
while(t--){
int x1, x2, x3; cin>>x1>>x2>>x3;
int x4 = 0;
bool found = true;
        for (int i = 0; i < x2; ++i) {
            int x6 = casino(x4, x1);
            x4 += (x6 == 0) ? 1 : x6;
            found = (x4 <= x3);

            if (!found) {
                break;
            }
        }
        if (x1 * (x3 - x4) > x3) {
            cout << "YES" << nline;
        } else {
            cout << "NO" << nline;
        }
    }
    return 0;
}
