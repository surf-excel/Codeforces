#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t; cin >> t;
while (t--) {
int n; cin >> n;
int ans=-1,arr[n]; 
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(i%2==0) ans=max(ans,arr[i]);
}
cout<<ans<<nline;
}  return 0;
}