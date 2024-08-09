#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'

bool is_dangerous(string x) {
    int c = 1;
    for (int i = 0; i < x.length() - 1; i++) {
        if (x[i] == x[i + 1]) {
            c++;
            if (c >= 7) {
                return true;
            }
        } else {
            c = 1;
        }
    }
    return false;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string players;
    cin >> players;
    
    if (is_dangerous(players)) {
        cout << "YES" << nline;
    } else {
        cout << "NO" << nline;
    }
    
    return 0;
}
