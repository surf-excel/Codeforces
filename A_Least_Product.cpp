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
vi a(n);
read(a); 
int neg=0; bool zero=false;
for(int i=0;i<n;i++)
{
if(a[i]<0) neg++;
else if(a[i]==0) zero=true;
}
if(neg%2!=0 || zero) cout <<"0"<<nline;
else{
cout<<"1"<<nline;
cout<<"1"<<" "<<"0"<<nline;
}
}
return 0;}
