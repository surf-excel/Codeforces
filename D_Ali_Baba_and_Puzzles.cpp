#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c,d=0; cin>>a>>b>>c>>d;
cin >> a >> b >> c >> d;
((a+b*c)==d || (a+b-c)==d || (a*b-c)==d || (a*b+c)==d || (a-b*c)==d || (a-b+c)==d )? cout << "YES": cout << "NO";
return 0;}