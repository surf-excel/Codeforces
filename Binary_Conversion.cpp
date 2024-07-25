#include<bits/stdc++.h>
#define ll long long
#define nline '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        
        bool ispossible = true;
        bool same = (a == b);
        bool alternating = (a == "01" || a == "10");
        bool oddk = (k % 2 == 1);
        
        if (same && alternating && oddk) {
            ispossible = false;
        }
        
        int count = 0, res = 0, F = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                count++;
                res += (a[i] - '0');
            } else {
                F++;
            }
        }
        bool twodiff = (count == 2 && a.size() == 2 && k % 2 == 0);
        
        if (twodiff) {
            ispossible = false;
        }
        
        bool f = (count == res * 2 && res <= k);
        
        cout << (ispossible && f ? "YES" : "NO") << nline;
    }
    
    return 0;
}
