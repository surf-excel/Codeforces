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
int n;
cin >> n;
string x;
cin >> x;
vi a; 
for (int i = 0; i < n; i++) {
if (x[i] == '1') a.push_back(i);
}
if (a.size()%2 !=0||(a.size()==2 && a[1]-a[0]==1)) cout<<"NO"<<nline;
else cout <<"YES"<<nline;
}return 0;
}
