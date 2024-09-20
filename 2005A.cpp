#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<string>
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
    string s; string v = "aeiou";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n / 5 + (i < n % 5); j++) {
            s += v[i];
            }
        }
        cout<<s<<nline;
}
return 0;}