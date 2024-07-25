#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
string s;
cin>>s;
bool found=false;
for(int i=1; i<s.size(); ++i)
{
if(s[i]!=s[0])
{
swap(s[i],s[0]);
found=true;
break;
}
}
if(found) cout<<"YES\n"<<s<<'\n';
else cout<<"NO\n";
}
return 0;}