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
int h, x, y; cin>>h>>x>>y;
        int n= h-y;
        if (n == 0) {
            cout << "1" << nline;
        } else {
            int m = n/x;
            cout << (n % x == 0 ? m + 1 : m + 2)<<nline;
        }
    }
    return 0;
return 0;}