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
int t=1e9;
cin>>t;
while(t--){
int n;
cin>>n;
vi vec(n);
int prev=0,total=0,mxd=0;
read(vec);
for(int i=0;i<n;i++){
if(vec[i]>=prev) prev=vec[i];
else {
int diff=prev-vec[i];
total += diff;
//cout<<total<<i<<nline;
mxd=max(mxd,diff);
//cout<<mxd<<i<<nline;
}
}
cout<<total+mxd<<nline;
}
return 0;
}
