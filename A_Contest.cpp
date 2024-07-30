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
// int t=1;
// cin>>t;
// while(t--){
int a,b,c,d; cin>>a>>b>>c>>d;
int m,x,y;
x=(3*a)/10; y=a-((a/250)*c);
m= max(x,y);
int v,x1,y1;
x1=(3*b)/10; y1=b-((b/250)*d);
v= max(x1,y1);
if(m>v) cout<<"Misha"<<nline;
else if(m<v) cout<<"Vasya"<<nline;
else cout<<"Tie"<<nline;
// }
return 0;}