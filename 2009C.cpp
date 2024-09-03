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
int t=1e9;
cin >> t;
while (t--) {
int x,y,k; cin>>x>>y>>k;
int flagx = (x+k-1)/k, flagy = (y+k-1)/k;  
int ans = max(flagx,flagy)*2;
if (flagx > flagy) ans-=1;
cout << ans << nline;
}
return 0;
}
