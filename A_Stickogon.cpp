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
int visited[101] = {0};
for (int i = 0; i < n; ++i) {
int a; cin>>a;
if (a <= 100) {
visited[a]++;
}
}
int ans = 0;
for (int i = 0; i <= 100; ++i) {
ans += visited[i] / 3;
}
cout<<ans<<nline;
}
return 0;
}
