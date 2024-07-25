#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
while(t--) {
int n;
cin >> n;
vi a(n);
read(a);
int ans = a[n-1];
int maxi = 0;
for (int i = 0; i < n-1; i++) {
maxi = max(a[i], maxi);
}
ans += maxi;
cout << ans << '\n';
}
return 0;
}