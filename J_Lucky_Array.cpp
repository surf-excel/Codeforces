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
int n; cin>>n; vi a(n); read(a);
sort(a.begin(),a.end());
int flag=0;
for (int i = 0; i < n; i++)
{
    if(a[0]==a[i]) flag++;
}
if(flag%2 !=0) cout<<"Lucky";
else cout<<"Unlucky";
return 0;}