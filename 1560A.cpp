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
int n; cin>>n;
for(int i=1;;i++){
    if(i%3==0 || i%10==3){
        continue;
    }
    else{
        --n;
        if(n==0){
            cout<<i<<nline;
            break;
        }
    }
}
}
return 0;}