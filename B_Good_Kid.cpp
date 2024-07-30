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
sort(a.begin(),a.end());
a[0] +=1; int ans=1;
for (int i = 0; i < n; i++)
{
    ans *=a[i];
}
cout<<ans<<nline;
}
return 0;}