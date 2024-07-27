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
int e,m,b,doll=0; cin>>e>>m>>b;
int mn=min({e,m,b});
doll +=mn; e -= mn; m-=mn; b -=mn;
mn = min(e/2,b);
doll +=mn;
// while(e !=0 ){
// if(e>=1 && m>0 && b>0){
// doll++;
// e -=1; m -=1; b -=1;
// }
// else if(e>=2 && m>0 && b>0){
// doll++;
// e -=2; m -=1; b-=1; 
// }
// else if(e>=2 && b>0){
// doll++;
// e -=2; b -=1;
// }
// }
cout<<doll;
return 0;}