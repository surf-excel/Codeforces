#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for (int i = 0; i < n; i++){int x;cin>>x;a.push_back(x);}
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vi b;
int n; cin>>n;
read(b)
sort(b.begin(),b.end());
for (int i = 0; i < n; i++)
{
    cout<<b[i]<<" ";
}
return 0;}