#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define nline '\n'
#define vi vector<string>
bool bot(const vi &matrix, int side) {
    for (int i = 0; i < side; ++i) {
        if (matrix[0][i] != '1' || matrix[side - 1][i] != '1') return false;
        if (matrix[i][0] != '1' || matrix[i][side - 1] != '1') return false;
    }
    for (int i = 1; i < side - 1; ++i) {
        for (int j = 1; j < side - 1; ++j) {
            if (matrix[i][j] != '0') return false;
        }
    }
    return true;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1e9+1;
    cin>>t;
    while(t--){
        int n=1e9; cin >> n;
        string s; cin >> s;
        int side = sqrt(n);
        if (side * side != n) {
            cout << "No" << nline;
        } else {
            vi matrix(side, string(side, ' '));
            for (int i = 0; i < n; ++i) {
                matrix[i / side][i % side] = s[i];
            }
            if (bot(matrix, side)) {
                cout << "Yes" << nline;
            } else {
                cout << "No" << nline;
            }
        }
    }
    return 0;
}
