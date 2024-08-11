#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
bool is_lucky(int n) {
    while (n != 0) {
        int r = n % 10;
        if (!(r == 4 || r == 7)) return false;
        n /= 10;
    }
    return true;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
int lucky_count = 0;
while (n != 0) {
int r = n % 10;
if (r == 4 || r == 7) lucky_count++;
n /= 10;
}
if (is_lucky(lucky_count)) cout << "YES" << nline;
else cout << "NO" << nline;
return 0;
}
