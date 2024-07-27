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
bool found=false;
for(int i=1;i<=x;i++){
    if(i%2==0){
        cout<<i<<endl;
        found=true;
    }
}
if(!found){
    cout<<"-1";
}
return 0;}