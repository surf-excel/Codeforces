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
        int n=1e9; cin>>n;
        vi col(n);
        for (int i = 0; i < n; ++i) {
            string row; cin>>row;
            for (int j = 0; j < 4; ++j) {
                if (row[j] == '#') {
                    col[i] = j+1;
                    break;
                }
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            cout << col[i] << " ";
        }
        cout << nline;
    }
return 0;}