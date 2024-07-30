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
map<int, int> mp;
mp.clear();
int n=1e9, flag = 0 ; cin >> n; int a[n];
for(int i = 0; i < n; i++){
cin >> a[i];
mp[a[i]]++;
if(mp[a[i]] > 1) flag = 1;
}
if(flag == 1) cout << "NO" << nline;
else cout << "YES" << nline;
}
return 0;}