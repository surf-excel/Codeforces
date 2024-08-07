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
        string a, b;
        cin >> a >> b;
        vector<char> a_vec(a.begin(), a.end());
        vector<char> b_vec(b.begin(), b.end());
        int i = 0, j = 0;
        while (i < a_vec.size() && j < b_vec.size()) {
            if (a_vec[i] == b_vec[j] || a_vec[i] == '?') {
                if (a_vec[i] == '?') {
                    a_vec[i] = b_vec[j];
                }
                i++;
                j++;
            } else {
                i++;
            }
        }
        int k = 0;
        while (k < a_vec.size()) {
            a_vec[k] = (a_vec[k] == '?') ? 'a' : a_vec[k];
            k++;
        }
        cout << (j == b_vec.size() ? "YES" : "NO") << nline;
        if (j == b_vec.size()) {
            for (char c : a_vec) {
                cout << c;
            }
            cout << nline;
        }
    }

    return 0;
}
