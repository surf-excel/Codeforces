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
int n,m,k;
cin>>n>>m>>k;
vi a(n), Gellyfish(m);
read(a); read(Gellyfish);
int ans=0;
sort(a.begin(),a.end());
sort(Gellyfish.begin(), Gellyfish.end());
if(k%2==0){
if(a[0]<Gellyfish[m-1]) {
swap(a[0],Gellyfish[m-1]); 
sort(a.begin(), a.end()); 
sort(Gellyfish.begin(), Gellyfish.end());
}
if(Gellyfish[0]<a[n-1]) {
swap(a[n-1],Gellyfish[0]); 
sort(a.begin(), a.end());
sort(Gellyfish.begin(),Gellyfish.end());
}
}
else{
if(a[0]<Gellyfish[m-1]) {
swap(a[0],Gellyfish[m-1]);
sort(a.begin(),a.end());
sort(Gellyfish.begin(),Gellyfish.end());
}
}
for(auto it: a) ans+=it;
cout<<ans<<nline;
}
return 0;}