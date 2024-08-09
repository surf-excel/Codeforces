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
int k,n,w,sum=0,ans; cin>>k>>n>>w;
for (int i = 1; i <=w ; i++)
{
     sum +=(k*i);
}
if(sum<n) {cout<<"0"<<nline; return 0;}
ans=sum-n;
cout<<ans<<nline;
return 0;}