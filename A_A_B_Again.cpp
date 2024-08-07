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
int t=2*1e5+1;
cin>>t;
while(t--){
int n;
cin>>n;
cout<<(n/10)+(n%10)<<nline;
}
return 0;
}
