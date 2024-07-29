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
int n,m,k;
cin>>n>>m>>k;
int ans=0;
if(k>3) ans=0;
else if(k==1) ans=1;
else if (k==2) {
if (m<(m/n+n-1)) ans=m;
else ans=m/n+n-1;       
}else { // k == 3
    ans=m-(m/n)-n+1;
    if(ans<0) ans=0;
}
cout<<ans<<nline;
}
return 0;
}
