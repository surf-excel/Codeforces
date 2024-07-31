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
while(t--){
int n;
        cin >> n;
        vi h(n); read(h);
        int cnt = h.back();
        for (int i = n - 2; i >= 0; i--) {
            int tmp = cnt + 1;
            cnt = max(tmp, h[i]);
        }
        cout << cnt << '\n';

}
return 0;}
