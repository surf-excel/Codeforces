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
vi arr(n); read(arr);
vi even; vi odd;
for(auto i: arr){
    if(i%2==0) even.push_back(i);
    else odd.push_back(i);

}
int ans=0; int z=1;
for(int i=0; i<even.size(); i++){
    ans+=(arr.size()-z);
    z++;
}
for(int i=0; i<odd.size(); i++){
    for(int j=i+1; j<odd.size(); j++){
        if(__gcd(odd[i],2*odd[j])>1) ans++;
    }
}cout<<ans<<nline;
}
return 0;}