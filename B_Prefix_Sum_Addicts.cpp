#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
int n, K; cin >> n >> K;
vi S(K), A(n, 0);
read(S);
bool ok = true;
for (int i = 1; i < K; i++) {
int cd = S[i] - S[i-1];
A[i+n-K] = cd;
}
for (int i = n-K; i >= 0; i--) {
A[i] = A[i+1];
}
int s = accumulate(A.begin(), A.begin() + n - K + 1, 0LL);
if (s < S[0]) ok = false;

for (int i = 1; i < n; i++) {
if (A[i] < A[i-1]) ok = false;
}
if (K == 1) ok = true;
if (ok) cout<<"Yes"<<nline;
else cout<<"No"<<nline;
}
return 0;
}
