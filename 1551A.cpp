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
if(n%3 ==0) cout<<n/3<<" "<<n/3<<nline;
else if(n%3 ==1) cout<<n/3+1<<" "<<n/3<<nline;
else cout<<n/3<<" "<<n/3+1<<nline;

}
return 0;}