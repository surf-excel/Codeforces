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
int n; cin>>n; int w[n],t[n];
for (int i = 0; i < n; i++)
{
    cin>>w[i]>>t[i];
}
bool win=true;
for (int i = 1; i < n; i++)
{
    if(w[i]>=w[0] && t[i]>=t[0]) win=false;
}
if(win && w[0]>=1) cout<<w[0]<<nline;
else cout<<"-1"<<nline;
}
return 0;}