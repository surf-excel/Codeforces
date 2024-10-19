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
vi arr(n); read(arr);
sort(arr.begin(),arr.end());
int mini,maxi,sum;
mini=arr[0]; maxi=arr[n-1];
sum=(maxi-mini)*(n-1);
cout<<sum<<nline;}
return 0;}