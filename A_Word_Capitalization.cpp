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
string s; cin>>s;
char c=s[0];
if(c>='A' && c<='Z') {cout<<s<<nline;}
else {s[0]=toupper(c); cout<<s<<nline;}
return 0;}