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
int x,y; cin>>x>>y;
if(x<y) cout<<x<<" "<<y<<nline;
else cout<<y<<" "<<x<<nline;
}
return 0;}