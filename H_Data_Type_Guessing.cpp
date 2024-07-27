#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
double n,k,a; cin>>n>>k>>a;
long long x=(k*n)/a;
double y=(k*n)/a;
double check=(y-x);
if(check>0){
cout<<"double"<<nline;
}
else if(y>2147483647){
cout<<"long long"<<nline;
}
else cout<<"int"<<nline;
return 0;}