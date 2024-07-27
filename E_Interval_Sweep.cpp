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
int a,b; cin>>a>>b;
if(a ==0 && b ==0) cout<<"NO";
else if(abs(a-b)==1 || abs(a-b)==0) cout<<"YES";
else cout<<"NO";
return 0;}