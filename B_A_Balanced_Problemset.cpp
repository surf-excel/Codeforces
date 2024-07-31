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
int x, n; cin>>x>>n;
int ans=-1e9;
for(long i = 1; i * i <= x; i++){
if(x % i){continue;}
int q = (x / i);
if(q >= n){ans = (ans > i) ? ans : i;}
if(i >= n){ans = (ans > q) ? ans : q;}
}
cout<<ans<<nline;
}
return 0;}