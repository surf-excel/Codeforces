#include <bits/stdc++.h>
    using namespace std;
    #define int long long int
    #define vi vector<char>
    #define read(a) for(auto &i: a) cin>>i
    #define mod 1000000007
    #define nline '\n'
    signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
    int n;
        cin >> n;
        string s, r; cin >> s>> r;
        vi stk;
        int p = 0;
        for (char c : s) {
            stk.push_back(c);
            
            while (stk.size() >= 2 && stk[stk.size() - 2] != stk[stk.size() - 1] && p < r.size()) {
                char replacement = r[p];
                stk.pop_back();
                stk.pop_back();
                stk.push_back(replacement);
                p++;
            }
        }
        if (p == n - 1 && stk.size() == 1) cout << "YES" << nline;
        else cout << "NO" << nline;
    
    }
    return 0;}