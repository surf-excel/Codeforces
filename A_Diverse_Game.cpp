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
int n, m;
cin >> n >> m;
vector<vi> a(n, vi(m, 0));
for (int row = 0; row < n; row++) {
read(a[row]);
}
for (int col = 0; col + 1 < m; col++) {
swap(a[0][col], a[0][col + 1]);
}
for (int row = 0; row + 1 < n; row++) {
swap(a[row], a[row + 1]);
}
if (n * m == 1) {
cout << "-1" << nline;
continue;
}
for (const auto& row : a) {
for (int val : row) {
cout << val << " ";
}
cout << nline;
}
}
return 0;
}
