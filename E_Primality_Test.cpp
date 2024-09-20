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
int n; cin >> n;
if (n == 2) cout << "yes" << nline;
else if (n < 2 || n % 2 == 0) cout << "no" << nline;
else {
        bool found = true;
        for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
        found = false;
        break;
        }}
        cout << (found ? "yes" : "no") << nline;
        }
}
return 0;}