
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define read(a) for (auto &i : a) cin >> i
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t=1;
cin>>t; 
while (t--) {
int n;
cin>>n;
vi a(n), b(n); read(a); read(b);
if (equal(a.begin(), a.end(), b.begin())) {
cout << "Bob" << nline;
continue;
}
if (equal(a.begin(),a.end(),b.rbegin())) {
cout << "Bob" << nline;
} else {
cout << "Alice" << nline;
}
}
return 0;
}