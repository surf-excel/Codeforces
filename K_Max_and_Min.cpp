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
vi a(3); cin>>a[0]>>a[1]>>a[2];
sort(a.begin(),a.end());
cout<<a[0]<<" "<<a[2];
return 0;}