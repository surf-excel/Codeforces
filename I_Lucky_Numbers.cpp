#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x; cin>>x;
int num1= x%10;
int num2= x/10;
if( num1%num2 == 0 || num2%num1 == 0){
    cout<<"YES"<<'\n';
}
else{
    cout<<"NO"<<'\n';
}
return 0;}