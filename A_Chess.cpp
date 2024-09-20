#include <bits/stdc++.h>
using namespace std;
//#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans=64;
    string a, b;
    cin >> a >> b;
    int x1 = int(a[0]) - 'a' + 1, y1 = int(a[1]) - '0';
    int x2 = int(b[0]) - 'a' + 1, y2 = int(b[1]) - '0';
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (x1 == i || y1 == j || (x2 == i && y2 == j)) ans--;
            else if ((abs(x1 - i) == 2 && abs(y1 - j) == 1) || (abs(x2 - i) == 2 && abs(y2 - j) == 1)) ans--;
            else if ((abs(x1 - i) == 1 && abs(y1 - j) == 2) || (abs(x2 - i) == 1 && abs(y2 - j) == 2)) ans--;
        }
    }
    cout << ans << nline;
    return 0;
}
