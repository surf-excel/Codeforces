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
int r=n%7;
int x=7-r;
int last= n%10;
if(n%7==0) cout<<n<<nline;
else if(last+x<10) cout<<n+x<<nline;
else  cout<<n-r<<nline;
}
return 0;}