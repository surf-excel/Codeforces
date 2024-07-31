#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin >> t;
while(t--){
        int n, k;
        cin >> n >> k;
        vi a(n);
        read(a);
        
        int b = a[--k];
        int first = n, second = n;
        for (int i = 0; i < n; i++) {
            if (a[i] > b && first == n) {
                first = i;
            } else if (a[i] > b) {
                second = i;
                break;
            }
        }
        int A = first - 1;
        int B = (second < k ? second : k) - first - (first == 0);
        if (A > B) {
            cout << A << nline;
        } else {
            cout << B << nline;
        }
    }
    return 0;
}
