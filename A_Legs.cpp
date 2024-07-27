#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
int n; cin>>n;
int cow= n/4;
int chicken= (n%4)/2;
cout<<cow+chicken<<'\n';
}
return 0;}