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
int n; cin >> n;
string str; cin >> str;
vi prefix_sum(n+1);
prefix_sum[0] = 0;
for(int i=0;i<n;i++){
prefix_sum[i+1] = prefix_sum[i]+str[i]-'0';
}
int ans=1e9;
for(int i=0;i<=n;i++){
int left =i-prefix_sum[i];
int right =prefix_sum[n]-prefix_sum[i];
if(2*left>=i && 2*right>=n-i){
if(abs(n-2*i)<abs(n-2*ans)) {
ans = i;
}
}
}
cout<<ans<<nline;
}
return 0;}