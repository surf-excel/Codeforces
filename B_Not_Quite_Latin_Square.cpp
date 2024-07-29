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
cin>>t; t *=3;
while(t--){
string s; cin>>s;
sort(s.begin(),s.end());
if(s[0]=='?'){
    if(s[1]=='A' && s[2]=='B') cout<<"C"<<nline;
    else if(s[1]=='A' && s[2]=='C') cout<<"B"<<nline;
    if(s[1]=='B' && s[2]=='C') cout<<"A"<<nline;
}
}
return 0;}