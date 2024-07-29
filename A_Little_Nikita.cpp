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
int n,m; cin>>n>>m;
if(n<m) cout<<"No"<<nline;
else {int cube=n-m;
if(cube%2 ==0) cout<<"Yes"<<nline;
else cout<<"No"<<nline;
}
}
return 0;}