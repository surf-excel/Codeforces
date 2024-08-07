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
auto Ask = [&](int x, int y) {
      cout << "? " << x << " " << y << nline;
      int p;
      cin >> p;
      return p;
    };
    int low = 1, high = 999;
    while (low + 1 < high) {
      int mid = (low + high) >> 1;
      if (Ask(1, mid) == mid) {
        low = mid;
      } else {
        high = mid;
      }
    }
    cout << "! " << high << nline;
}
return 0;}