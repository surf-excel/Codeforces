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
map<string, string>mp;
while(t--){
string str1, str2;
cin>>str1>>str2;
bool ok= false;
for(auto it:mp){
if(it.second == str1){
mp[it.first] = str2;
ok = true;
}
}
if(!ok) mp[str1] = str2;
}
cout << mp.size() << nline;
for(auto it:mp){
cout << it.first <<" "<<it.second <<nline;
}
return 0;}