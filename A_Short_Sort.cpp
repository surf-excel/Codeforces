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
string x; cin>>x;
if((x[0] =='c' && x[1]=='a')||(x[0] =='b' && x[1]=='c')){
    cout<<"NO"<<nline;
}
else cout<<"YES"<<nline;
}
return 0;}