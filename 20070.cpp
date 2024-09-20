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
    int t;
    cin >> t;
    while (t--) {
        int i, j;
        cin >>i>>j;
        if (i % 2 == 0) i++;
        cout<<(j - i + 2)/4<<nline;
    }
    
    return 0;
}
