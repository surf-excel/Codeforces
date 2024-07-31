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
int n,k; cin>>n>>k;
string s; cin>>s;
int v[26] = {0};
for(int i = 0; i < s.size(); i++){v[s[i] - 'a']++;}
int cnt=0; 
for(int i = 0; i < 26; i++){cnt += v[i] % 2;}
if(cnt <= k + 1) cout<<"YES"<<nline;
else cout<<"NO"<<nline;
}
return 0;}