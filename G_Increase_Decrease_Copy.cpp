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
    int t;
    cin >> t;
    while (t--) {
    int n; cin>>n;
    vi a(n),b(n+1); read(a); read(b);
    int cnt = 0,mn=mod;
    for(int i=0;i<n;i++){
        cnt+=abs(a[i]-b[i]);
        mn=min(mn,abs(a[i]-b[n])+1);
        mn=min(mn,abs(b[i]-b[n])+1);
        if(min(a[i],b[i])<=b[n]&&b[n]<=max(a[i],b[i]))
            mn=1;
    }
    cout<<cnt+mn<<nline;
    }
    return 0;
}
