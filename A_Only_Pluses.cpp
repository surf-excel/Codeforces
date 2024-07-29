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
int a,b,c; cin>>a>>b>>c;
int n=5;
while(n--){
int mini=min({a,b,c});
if(mini == a) a++;
else if(mini==b) b++;
else c++;
}
cout<<a*b*c<<nline;
}
return 0;
}