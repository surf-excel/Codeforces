#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
bool last_digit(int x){
        return x%10==0;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k,ans=0; cin>>n>>k;
for (int i = 1; i <= k; i++)
{
    if(last_digit(n)) n=n/10;
    else n -=1;
}
cout<<n;
return 0;}