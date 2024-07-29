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
int p1,p2,p3; cin>>p1>>p2>>p3;
int total=p1+p2+p3;
vi a={p1,p2,p3}; p1=a[0]; p2=a[1]; p3=a[2];
sort(a.begin(),a.end());
if (total == 0) {
cout << "0" << nline;
} else if (total % 2 != 0) {
cout << "-1" << nline;
} else {
if (p3 > p1 + p2) {
cout << p1 + p2 << nline;
} else {
cout << total / 2 << nline;
}
}
}
return 0;}