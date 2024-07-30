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
int n; cin>>n;
vi a(n);
read(a);
if(count(begin(a), end(a), a[0]) == n) cout << -1 <<nline;
else{
int ans =1e9, cnt = 0;
for(int i = 0; i < n; ++i){
if(a[i] == a[0]){
++cnt;
}else{
ans = min(ans, cnt);
cnt = 0;
}
}
ans = min(ans, cnt);
cout << ans <<nline;
}
}
return 0;}