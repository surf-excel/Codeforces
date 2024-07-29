#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'

int f(int n) {
    if (n < 0) return 1e9;
    long cnt = 0;
    cnt += (n/15); n%=15;
    cnt += (n/6);  n%=6;
    cnt += (n/3);  n%=3;
    cnt += n;
    return cnt;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1e9; 
cin>>t;
while (t--) {
int n; cin>>n;
int zero_tens = f(n);
int one_tens  = 1 + f(n - 10);
int two_tens  = 2 + f(n - 20);
int ans = min({zero_tens, one_tens, two_tens});
cout <<ans<<nline;
}
return 0;
}
