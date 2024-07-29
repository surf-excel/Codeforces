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
string s; cin>>s; int aflag=0,bflag=0;
for (int i = 0; i < 5; i++)
{
if(s[i]=='A') aflag++;
else if(s[i]=='B') bflag++;
}
if(aflag>bflag) cout<<"A"<<nline;
else cout<<"B"<<nline;
}
return 0;}