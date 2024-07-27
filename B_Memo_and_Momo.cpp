#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,k; cin>>a>>b>>k;
if(a%k==0 && b%k==0){
    cout<<"Both"<<'\n';
}
else if(a%k==0){
    cout<<"Memo"<<endl;
}
else if(b%k ==0){
    cout<<"Momo"<<endl;
}
else cout<<"No One"<<endl;
return 0;}