#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--) {
int a, b, r; cin >> a >> b >> r;
        if (a < b) swap(a, b);
        int start = -1;
        for (int i = 61; i >= 0; i--) {
            const int bit_a = a & (1LL << i);
            const int bit_b = b & (1LL << i);
            if (bit_a == bit_b) continue;
            start = i;
            break;
        }
        int x = 0;
        for (int i = start - 1; i >= 0; i--) {
            const int bit_a = a & (1LL << i);
            const int bit_b = b & (1LL << i);
            if (bit_a > 0 && bit_b == 0) {
                if (x + bit_a <= r) {
                    x += bit_a;
                }
            }
        }
        cout << abs((a ^ x) - (b ^ x)) << nline;
    } 
    return 0;
}
