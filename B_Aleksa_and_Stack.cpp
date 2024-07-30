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
int n;cin>>n;
int count=2, p=0;
for(int i=1;i<=n;i++){
count++;
if(i%3==0) {
count++;
p++;
if(p%2==0) count++;
}
cout<<count<<" ";
}
cout<<nline;
}
return 0;}