#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a, sum) {sum = 0; for(auto &i: a) {cin>>i;sum += i;}}
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--) {
int n; cin>>n;     
vi vec(n),vec2(n);
int ans1=1e9,ans=1e9;
read(vec,ans);
read(vec2,ans1);
sort(vec.begin(),vec.end());
sort(vec2.begin(),vec2.end());
cout<<min(ans+n*vec2[0],ans1+n*vec[0])<<nline;
}
return 0;
}

