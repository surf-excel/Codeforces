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
    int n,l; cin>>n>>l; vi a(n); read(a);
    int mx=-1e9;
    for(int i=l;i<=100;i++){
        int ans=0;
        for(auto &j : a){
            ans+=j/i;
        }
        mx=max(mx,ans*i);
    }
    cout<<mx;
    return 0;
}
