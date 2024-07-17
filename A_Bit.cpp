#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
int n=0;
while(t--){
string a;
cin>>a;
if(a=="X++" || a=="++X"){
n++;
}
else {
n--;
}
} cout<<n;
return 0;}