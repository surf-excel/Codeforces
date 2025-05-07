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
string s; cin>>s;
map<char,int> m;
bool found=false;
for(int i=0; i<n; i++){
    m[s[i]]++;
    char c=s[i];
    while(c==s[i]){
        i++;
    } i--;
    if(m[c]>1){
        found=true;
        break;
    }
}
if(found) cout<<"NO"<<nline;
else cout<<"YES"<<nline;
}
return 0;}