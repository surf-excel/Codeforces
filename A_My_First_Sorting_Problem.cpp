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
while(t--){
int x,y; cin>>x>>y;
//solution:1
// if(x>y){
//     cout<<y<<" "<<x<<'\n';
// }
// else if(x<y){
//     cout<<x<<" "<<y<<'\n';
// }
// else{cout<<x<<" "<<y<<'\n';}
// }
//solution:2
/*cout<<min(x,y)<<" "<<max(x,y)<<'\n'; */
//solution:3
vi a = {x, y};
        sort(a.begin(), a.end());
        cout << a[0] << " " << a[1] << '\n';
}
return 0;}