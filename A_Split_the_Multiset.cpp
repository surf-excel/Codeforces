#include<bits/stdc++.h>
#define ll long long
#define nline '\n'
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    cout <<(n+k-3)/(k-1)<<nline;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin>>T;
    while (T--) 
    {
        solve();
    }
    return 0;
}